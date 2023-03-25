# __Display and Positioning__
## __Flow of HTML:__
A browser will render the elements of an HTML document that has no CSS from left to right, top to bottom, in the same order as they exist in the document.\
This is called the flow of elements in HTML.

In addition to the properties that it provides to style HTML elements, CSS includes properties that change how a browser positions elements.\
These properties specify where an element is located on a page, if the element can share lines with other elements, and other related attributes.

There are five properties for adjusting the position of HTML elements in the browser:
- position
- display
- z-index
- float
- clear

Each of these properties allow us to position and view elements on a web page.\
They can be used in conjunction with any other styling properties.

## __Position:__
Block-level elements create a block the full width of their parent elements, and they prevent other elements from appearing in the same horizontal space.\
The default position for block-level elements is to appear consistently on the left side of the browser.\
The default position of an element can be changed by setting its position property.\
The position property can take one of five values:
- static - the default value (doesn't need to be specified)
- relative
- absolute
- fixed
- sticky

## __Position Relative:__
One way to modify the default position of an element is by setting its position property to relative.\
This value allows us to position an element relative to its default static position on the web page.\
Example:
```css
.green-box {
	background-color: green;
	position: relative;
}
```
This code instructs the browser to expect a relative positioning of the .green-box.\
It does not however specify where the .green-box element should be positioned on the page.\
This is done by accompanying the position declaration with one or more of the following offset properties that will move the element away from its default static position:
- top - moves the element down from the top
- bottom - moves the element up from the bottom
- left - moves the element away from the left side to the right side
- right - moves the element away from the right side to the left side

This offset property will not work if the element's position property is the default static.\
Example:
```css
.green-box {
	background-color: green;
	position: relative;
	top: 50px;
	left: 120px;
}
```
## __Position Absolute:__
When an element's position is set to aboslute, all other elements on the page will ignore the element and act like it is not present on the page.\
The element will be positioned relative to its closest positioned parent element, while offset properties can be used to determine the final position from there.

When an element's position is set to absolute, the element will scroll with the rest of the document when a user scrolls

## __Position: Fixed (Element moves as user scrolls)__
We can fix an element to a specific position by setting its position to fixed, and using the offset properties.\
Example:
```css
.title {
	position: fixed;
	top: 0px;
	left: 0px;
}
```
The .title element will remain fixed to its position no matter where the user scrolls on the page.

## __Position Sticky:__
Static and relative postioned elements stay in the normal flow of the document, which means that when a user scrolls the page, these elements will scroll too.\
Fixed and Absolute positioned elements are removed from the document flow, so when a user scrolls, these elements will stay at their specified offset position.

The sticky value is another position value that keeps an element in the document flow as the user scrolls, but sticks to a specified position as the page is scrolled further.\
Example:
```css
.box-bottom {
	background-color: darkgreen;
	position: sticky;
	top: 240px;
}
```
The .box-bottom `<div>` will remain in its relative position, and scroll as usual. \
When it reaches 240 pixels from the top, it will stick to that position until it reaches the bottom of its parent container where it will "unstick" and rejoin the flow of the document.

## __Z-Index:__
When boxes on a web page have a combination of different positions, the boxes and their content can overlap with each other, which can make content difficult to read or consume.\
Example:
```css
.blue-box {
	background-color: blue;
}

.green-box {
	background-color: green;
	position: relative;
	top: -170px;
	left: 170px;
}
```
The .green-box overlaps with the .blue-box.\
The z-index property controls how far back or how far forward an element should appear on the web page when elements overlap.\
This can be thought of as the depth of elements, with deeper elements appearing behind shallower elements.

The z-index property accepts integer values. Depending no the values, the integers instructs the browser on the order in which elements should be layered on the web page.\
Example:
```css
.blue-box {
	background-color: blue;
	position: relative;
	z-index: 1;
}

.green-box {
	background-color: green;
	position: relative;
	top: -170px;
	left: 170px;
}
```
We must have position set to relative as z-index doesn't work on static elements.\
A z-index of 1 moves the .blue-box element forward and since a z-index value isn't specified for .green-box, this would default it to 0 and move it back.

## __Inline Display:__
Every HTML element has a default display value that dictates if it can share horizontal space with other elements.\
Some elements fill the entire browser from left to right regardless of the size of their content.\
Other elements only take up as much horizontal space as their content requires and can be directly next to other elements.

There are three values for the display property:
- inline
- block
- inline-block

The default display for some elements such as `<em>`, `<strong>`, and `<a>` is called inline.\
Inline elements have a box that wraps tightly around their content, only taking up the amount of space necessary to display their content and not requiring a new line after each element.\
The height and width of these elements cannot be specified in the CSS document.\
For example, the text of an anchor tag (`<a>`) will, by default, be displayed on the same ling as the surrounding text, and it will only be as wide as necessary to contain its content.\
Inline elements cannot be altered in size with the height or width CSS properties.

The CSS display property provides the ability to make any element an inline element.\
This includes elements that are not inline by default such as paragraphs, divs, and headings.\
Example:
```css
h1 {
	display: inline;
}
```
This will change the display of all `<h1>` elements to inline.\
The browser will render `<h1>` elements on the same line as other inline elements immediately before or after them (if there are any).

## __Display Block:__
Some elements are not displayed in the same line as the content around them.\
These are called block-level elements and these elements can fill the entire width of the page by default.\
Their width property can still be set, and unless specified, they are the height necessary to accomodate their content.

Elements that are block-level by default include all levels of heading elements (`<h1>` through `<h6>`), `<p>`, `<div>`, and `<footer>`.\
Example:
```css
strong {
	display: block;
}
```
This will make all `<strong>` elements be displayed on their own line, with no content directly on either side of them even though their contents may not fill the width of most computer screens.

## __Display: Inline-Block__
The third vlaue for the display property is inline-block.\
Inline-block display combines features of both inline and block elements.\
Inline-block elements can appear next to each other and we can specify their dimensions using the width and height properties.\
Images are the best example of default inline-block elements.\
Example:
```html
<div class = "rectangle">
	<p>I'm a rectangle!</p>
</div>
<div class = "rectangle">
	<p>So am I!</p>
</div>
<div class = "rectangle">
	<p>Me three!</p>
</div>
```
```css
.rectangle {
	display: inline-block;
	width: 200px;
	height: 300px;
}
```
There are three rectangular divs that each contain a paragraph of text.\
The .rectangle `<div>`s will all appear inline (provided there is enough space from left to right) with a width of 200 pixels and a height of 300 pixels, even though the text inside of them may not require 200 pixels by 300 pixels of space.

## __Float:__
If we're simply interested in moving an element as far left or as far right as possible in the container, we can use the float property.\
The float property is commonly used for wrapping text around an image.\
Note that moving elements left or right for layout purposes is better suited for tools like CSS grid and flexbox.

The float property is often set using one of the values below:
- left - moves, or floats, elements as far left as possible.
- right - moves elements as far right as possible.
Example:
```css
.green-section {
	width: 50%;
	height: 150px;
}

.orange-section {
	background-color: orange;
	width: 50%;
	float: right;
}
```
Float works for static and relative positioned elements.

Floated elements must have a width specified, otherwise, the element will assume the full width of its containing element, and changing the float value will not yield any visible results.

## __Clear:__
The float property can also be used to float multiple elements at once.\
However, when multiple floated elements have different heights, it can affect their layout on the page.\
Elements can "bump" into each other and not allow other elements to properly move to the left or right.

The clear property specifies how elements should behave when they bump into each other on the page.\
It can take on one of the following values:
- left - the left side of the element will not touch any other element within the same containing element
- right - the right side of the element will not touch any other element within the same containing element
- both - neighter side of the element will touch any other element within the same containing element
- none - the element can touch either side.
Example:
```css
div {
	width: 200px;
	float: left;
}

div.special {
	clear: left;
}
```

This code will cause all .divs on the page to float to the left. \
The element will class special will not move all the way to the left because a taller `<div>` blocked its positioning.\
By setting its clear property to left, the special `<div>` will be moved all the way to the left side of the page.

## ___Review:__ 
- The position property allows us to specify the position of an element
- When set to relative, an element's position is relative to its default position on the page.
- When set to absolute, an element's position is relative to its closest positioned parent element. It can be pinned to any part of the web page, but the element will still move with the rest of the document when the page is scrolled.
- When set to fixed, an element's position can be pinned to any part of the web page. The element will remain in view no matter what.
- When set to sticky, an element can stick to a defined offset position when the user scrolls its parent container.
- The z-index of an element specifies how far back or how far forward an element appears on the page when it overlaps other elements.
- The display property allows us to control how an element flows vertically and horizontally in a document.
- Inline elements take up as little space as possible, and they cannot have manually adjusted width or height.
- Block elements take up the width of their container and can have manually adjusted heights.
- Inline-block elements can have set width and height, but they can also appear next to each other and do not take up their entire container width.
- The float property can move elements as far left or as far right as possible on a web page.
- We can clear an element's left or ride side (or both) using the clear property.
