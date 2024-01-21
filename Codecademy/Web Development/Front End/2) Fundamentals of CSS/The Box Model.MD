# The Box Model
## __Introduction to the Box Model__
Browsers load HTML elements with default position values.\
This often leads to an unexpected and unwanted user experience while limiting the views we can create.\
In this lesson, we'll learn about the Box Model, which is an important concept to understand how elements are positioned and displayed on a website.

All elements on a web page are interpreted by the browser as "living" inside of a box. This is what is meant by the box model.\
For example, when we change the background color of an element, we change the background color of its entire box.\
In this lesson, we'll learn about the following aspects of the following box model:
- The dimensions of an element's box.
- The borders of an element's box.
- The paddings of an element's box.
- The margins of an element's box.

## __The Box Model__
The box model comprises the set of properties that define parts of an element that take up space on a web page.\
The model includes the content area's size (width and height) and the element's padding, border, and margin.\
The properties include:
- width and height - the width and height of the content area
- padding - the amount of space between the content area and the border
- border - the thickness and style of the border surrounding the content area and padding
- margin - the amount of space between the border and the outside edge of the element

![](https://content.codecademy.com/courses/freelance-1/unit-4/diagram-boxmodel.svg?_gl=1*12vdxdn*_ga*OTAwMTA5OTMyLjE2NzA4ODEwOTM.*_ga_3LRZM6TM9L*MTY3MjUxODI4Ny4yMi4wLjE2NzI1MTgyODcuNjAuMC4w)

## __Height and Width__
An element's content has two dimensions, a height and a width.\
By default, the dimensions of an HTML box are set to hold the raw contents of the box.

The CSS height and width properties can be used to modify these default dimensions.\
Example:
```css
p {
	height: 80px;
	width: 240px;
}
```
This will change the height of the paragraph to 80 pixels and the width to 240 pixels.\
When we set the element in units of pixels, it will be the same size on all devices which means an element that fills a laptop screen will overflow a mobile screen.

## __Borders__
A border is a line that surrounds an element, like a frame around a painting.\
Borders can be set with a specific width, style, and color:
- width - the thickness of the border. A border's thickness can be set in pixels or with one of the followking keywords: thin, medium, or thick.
- style - the design of the border. Web browsers can render any of 10 different styles. Some of these styles include: none, dotted, and solid.
- color - the color of the border. Web browsers can render colors using a few different formats, including 140 built-in color keywords.
Example:
```css
p {
	border: 3px solid coral;
}
```
The example above has the border with a width of 3 pixels, a style of solid, and a color of coral. All three properties are set in one line of code.\
The default border is medium none color, where color is the current color of the element. If width, style, or color are not set in the CSS file, the web browser assigns the default value for that property.\
Example:
```css
p.content-header {
	height: 80px;
	width: 240px;
	border: solid coral;
}
```
This code doesn't specify a width, so the browser defaults it to medium.

## __Border Radius__
Using CSS, a border doesn't have to be a square.\
We can modify the corners of an element's border box with the border-radius property.\
Example:
```css
div.container {
	border: 3px solid blue;
	border-radius: 5px;
}
```
The code will set all four corners of the border to a radius of 5 pixels.

We can create circles by playing with the height and width, and then adjusting the border-radius.\
Example:
```css
div.container {
	height: 60px;
	width: 60px;
	border: 3 px solid blue;
	border-radius: 50%;
}
```
Note: Perfect Circle is made by 100% border-radius and same height/width.

## __Padding__
The space between the contents of a box and the borders of a box is known as padding.\
Padding is like the space between a picture and the frame surrounding it. In CSS, we can modify this space with the padding property.\
Example:
```css
p.content-header {
	border: 3px solid coral;
	padding: 10px;
}
```
The code in this example puts 10 pixels of space between the content of the paragraph and the borders on all four sides.\
The padding property is often used to expand the background color and make the content look less cramped.\
There are derivatives to this:
- padding-top
- padding-right
- padding-bottom
- padding-left

Note: Border also has this.\
Extra Note: Margin compresses the borders while padding enlarges it. Margin will create the space outside of the element, while padding constricts space inwards.

## __Padding Shorthand__

Another implementation of the padding property lets you specify exactly how much padding there should be on each side of the content in a single declaration.\
A declaration that uses multiple properties as values is known as a shorthand property.

Padding shorthand lets you specify all of the padding properties as values on a single line:
- padding-top
- padding-right
- padding-bottom
- padding-left

We can specify these properties in a few different ways:\
4 values\
Example:
```css
p.content-header {
	padding: 6px 11px 4px 9px;
}
```
These pixels correspond to the padding on each side in a clockwise rotation.

3 values\
Example:
```css
p.content-header {
	padding: 5px 10px 20px;
}
```
If the left and right sides of the content can be equal, the padding shorthand property allows for 3 values to be specified\
The first is top, second is left and right, and third is bottom.

2 values\
Example:
```css
p.content-header {
	padding: 5px 10px;
}
```
If the top and bottom sides can be equal and the elft and right can be equal, we only need 2 values. The first is the top and bottom and second is left and right.


## __Margin:__
The final component is margin. Margin refers to the space directly outside of the box. The margin property is used to specify the size of this space.\
Example:
```css
p {
	border: 1px solid aquamarine;
	margin: 20px;
}
```
The code in the example above will place 20 pixels of space on the outside of the paragraph's box on all four sides.\
This means that other HTML elements on the page cannot come within 20 pixels of the paragraph's border.

## __Margin Shorthand__
We can also do the shorthand like padding to margin.\
4 Values\
Example:
```css
p {
	margin: 6px 10px 5px 12px;
}
```
Works the same way, goes clockwise rotation.

3 Values:
```css
p {
	margin: 5px 12px 4px;
}
```
2 Values:
```css
p {
	margin: 20px 10px;
}
```
## __Auto__
The margin property also lets you center content. However, we have to follow a few syntax requirements.\
Example:
```css
div.headline {
	width: 400px;
	margin: 0 auto;
}
```
In the example above, margin: 0 auto; will center the divs in their containing elements.\
The 0 sets the top and bottom margins to 0 pixels.\
The auto value instructs the browser to adjust the left and right margins until the element is centered within its containing element.\
In order to center an element, a width must be set for that element, otherwise, the width of the div will be automatically set to full width.\
It's not possible to center an element that takes up the full width of the page since the width of the page can change due to display and/or browser window size.

## __Margin Collapse__
Padding is space added inside an element's border while margin is space added outside an element's border.\
One additional difference is that top and bottom margins, also called vertical margins, collapse, while top and bottom padding does not.

Horizontal margins, like padding, are always displayed and added together. FOr example, if two divs with ids #div-one and #div-two, are next to each other, they will be as far apart as the sum of their adjacent margins.\
Example:
```css
#img-one {
	margin-right: 20px;
}

#img-two {
	margin-left: 20px;
}
```
This will have the space between the #img-one and #img-two borders as 40 pixels.\
Unlike horizontal margins, vertical margins don't add and instead, the larger of the two vertical margins set the distance between the adjacent elements.\
Example:
```css
#img-one {
	margin-bottom: 30px;
}

#img-two {
	margin-top: 20px;
}
```
The vertical margin between these two is 30 pixels despite the sum being 50 pixels.\
The margin collapses and so the spacing is only dependent on #img-one.

It's helpful to think of collapsing vertical margins as a short person trying to push a taller person.\
The tall person has longer arms and can easily push the short person, while the person with shorter arms cannot reach the person with long arms.

## __Minimum and Maximum Height and Width__
Since a web page can be viewed through displays of differing screen size, the content on the web page can suffer from those changes in size.\
To avoid this problem, CSS offers two properties that can limit how narrow or how wide an element's box can be sized to:
- min-width - this property ensures a minimum width of an element's box.
- max-width - this property ensures a maximum width of an element's box.
Example:
```css
p {
	min-width: 300px;
	max-width: 600px;
}
```
In the example above, the width of all paragraphs will not shrink below 300 pixels, nor will the width exceed 600 pixels.\
Content, like text, can become difficult to read when a browser window is narrowed or expanded.\
These two properties ensure that content is legible by limiting the minimum and maximum widths of an element.

We can also limit the minimum and maximum height of an element:
- min-height - this property ensures a minimum height for an element's box.
- max-height - this property ensures a maximum height of an element's box.

Example:
```css
p {
	min-height: 150px;
	max-height: 300px;
}
```
This will make height of all paragraphs shrink not below 150 pixels and not exceed 300 pixels.\
If the max-height is set too low, it's possible for the content to spill outside of the box, resulting in content that's not legible.

## __Overflow__
All of the components of the box model comprise an element's size.\
For example, an image that has the following dimensions is 364 pixels wide and 244 pixels talls:
- 300 pixels wide
- 200 pixels tall
- 10 pixels padding on the left and right
- 10 pixels padding on the top and bottom
- 2 pixels border on the left and right
- 2 pixels border on the top and bottom
- 20 pixels margin on the left and right
- 10 pixels margin on the top and bottom

Sometimes, these components results in an element that is larger than the parent's containing area.\
How can we ensure that we view all of an element that is larger than its parent's containing area?

The overflow property controls what happens to content that spills or overflows, outside its box.\
The most commonly used values are:
- hidden - any content that overflows will be hidden from view.
- scroll - a scrollbar will be added to the element's box so that the rest of the content can be viewed by scrolling.
- visible - the overflow content will be displayed outside of the containing element (default value).
Example:
p {
	overflow: scrolls;
}

This will have any content within the paragraph that overflow as a scrollable content.\
The overflow property is set on a parent element to instruct a web browser on how to render child elements.\
For example, if a div's overflow property is set to scroll, all children of this div will display overflowing content with a scrollbar.

## __Resetting Defaults__
All major web browsers have a default stylesheet they use in the absence of an external stylesheet.\
These stylesheets are known as user agent stylesheets.

User agent stylesheets often have default CSS rules that set default values for padding and margin.\
This affects how the browser displays HTML elements, which can make it difficult for a developer to design or style a web page.

We can reset it via:
```css
* {
	margin: 0;
	padding: 0;
}
```
This will set all elements within HTML to have 0 margin and 0 padding.

## __Visibility__
Elements can be hidden from view with the visibility property.\
The visibility property can be set to one of the following values:
- hidden - hides an element
- visible - displays an element
- collapse - collapses an element
Example:
```html
<ul>
	<li>Explore</li>
	<li>Connect>/li>
	<li class = "future">Donate</li>
</ul>
```
```css
.future {
	visibility: hidden;
}
```
The list item with a class of future will be hidden from view in the browser.\
Users can still view the contents of the list item by viewing the source code in the browser.\
Furthermore, the web page only hides the contents of the elemnt and will leave an empty space where the element is intended to display.

Note:An element with display:none will be completely removed from the web page, but an element with visibility:hidden will not be visible on the web page but still has the space reserved for it.

## __Review__
- The box model comprises a set of properties used to create space around and between HTML elements.
- The height and width of a content area can be set in pixels or percentages
- Borders surround the content area and padding of an element. The color, style, and thickness of a border can be set with CSS properties.
- Padding is the space between the content area and the border. It  can be set in pixels or percent.
- Margin is the amount of spacing outside of an element's border.
- Horizontal margins add, so that the total space between the borders of adjacent elements is equal to the sum of the right margin of one element and the left margin of the adjacent element.
- Vertical margins collapse, so the space between vertically adjacent elements is equal to the larger margin.
- margin: 0 auto horizontally centers an element inside of its parent content area, if it has a width.
- The overflow property can be set to display, hide, or scroll, and dictate how HTML will render content that overflows its parent's content area.
- The visibility property can hide or show elements.
