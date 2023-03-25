# __Selectors__
## __Type:__
Declarations are a fundamental part of CSS because they aplpy a style to a selected element, but choosing which elements get certain styles are done so with a selector.\
A selector is used to target the specific HTML element(s) to be styled by the declaration.\
One selector we're familiar with is the type selector, and just like the name, the type selector matches the type of the element in the HTML document.\
Example:
```css
p {
	color: green;
}
```
This is an insane of using the type selector where the type is p which comes from the HTML `<p>` element.\
Some important notes on the type selector:\
The type selector does not include the angle brackets.\
Since element types are often referred to by their opening tag name, the type selector is sometimes referred to as the tag name or element selector.

## __Universal:__
There is a selector that is a universal selector, which selects all elements of any type.\
Targeting all of the elements on the page has a few specific use cases, such as resetting default browser styling, or selecting all children of a parent element.\
The universal selector uses the * character in the same place where we specified the type selector in a ruleset.\
Example:
```css
* {
	font-family: Verdana;
}
```
The code will have all text element changed to Verdana.

## __Class:__
CSS is not limited to selecting elements by their type.\
HTML as we know can have attributes, and in CSS, we can use the class attribute as a way to select an element.\
Example:
`<p class = "brand">Sole Shoe Company</p>`

This code has a class attribute within the opening tag of the `<p>` element. The class attribute is set to "brand" and to select this element using CSS, we can create a ruleset with a class selector of .brand.\
Example:
```css
.brand {

}
```
To select an HTML element by its class using CSS, a period (.) must be prepended to the class's name. In the example above, the class is brand, so the CSS selector for it is .brand.

## __Multiple Classes:__
It's possible to add more than one class name to an HTML element's class attribute.\
For instance, perhaps there's a heading element that needs to be green and bold. We can write two CSS rulesets like so:\
Example:
```css
.green {
	color: green;
}

.bold {
	font-weight: bold;
}
```
We can then include both of these classes on one HTML element:\
Example:
`<h1 class = "green bold"> . . . </h1>`

We can add multiple classes to an HTML element's class attribute by separating them with a space.\
This allows us to mix and match CSS classes to create many unique styles without writing a custom class for every style combination needed.

## __ID:__
Sometimes, it's important to select a single element with CSS to give it it's own unique style.\
If an HTML element needs to be styled uniquely, we can give it an ID using the id attribute.\
Example:
`<h1 id = "large title"> . . . </h1>`

In contrast to class which accepts multiple values, and can be used broadly throughout an HTML document, an element's id can only have a single value, and only be used once per page.\
To select an element's ID with CSS, we prepend the ID name with a number sign (#).\
Example:
```css
#large-title {

}
```

The id name is large-title, therefore the CSS selector for it is #large-title.

## __Attribute:__
The attribute selector can be used to target HTML elements that already contain attributes.\
Elements of the same type can be targeted differently by their attribute or attribute value.\
This alleviates the need to add new code, like the class or id attributes.\
Attributes can be selected similarly to types, classes, and IDs.\
Example:
```css
[href] {
	color: magenta;
}
```

The most basic syntax is an attribute surrounded by square brackets.\
In the above example, [href] would target all elements with an href attribute and set the color to magenta.\
We can fine-tune it even more by adding typing and/or attribute values.\
One way is by using `type[attribute*=value]`.\
What this does is it selects an element where the attribute contains any instance of the specified value.\
Example:
```html
<img src = "/images/seasons/cold/winter.jpg">
<img src = "/images/seasons/warm/winter.jpg">
```
```css
img[src*='winter'] {
	height: 50px;
}

img[src*='summer'] {
	height: 100px;
}
```
The attribute selector is used to target each image individually.\
The first ruleset looks for an img element with an attribute of src that contains the string 'winter', and sets the height to 50px.\
THe second ruleset looks for an img element with an attribute of src that contains the string 'summer', and sets the height to 100px.

## __Pseudo-class:__
We have observed how the appearance of ceratin elements can change, or be in a different state, after certain user interactions.\
For instance:\
When we click on an `<input>` element, and a blue border is added showing that it is in focus.\
When we click on a blue `<a>` link to visit to another page, but when we return, the link's text is purple.\
When we're filling out a form and the submit buttion is grayed out and disabled. But when all of the fields have been filled out, the button has color showing that it's active.

These are all examples of pseudo-class selectors in action.\
In fact, `:focus`, `:visited`, `:disabled`, and `:active` are all pseudo-classes.\
Factors such as user-interaction, site navigation, and position in the document tree can all give elements a different state with pseudo-class.\
A pseudo-class can be attached to any selector. It is always written as a colon : followed by a name.\
Example:
```css
p:hover {
	background-color: lime;
}
```
This code will have the element turn limegreen when a mouse hovers over the paragraph element.

## __Classes and IDs:__
CSS can select HTML elements by their type, class, and ID.\
CSS classes and IDs have different purposes, which can affect which one we use to style HTML elements.

CSS classes are meant to be reused over many elements.\
By writing CSS classes, we can style elements in a variety of ways by mixing classes.\
For instance, imagine a page with two headlines where one needs to be bold and blue and the other needs to be bold and green.\
Instead of writing separate CSS rules for each of them, we can reuse the class and scale our code.

While classes are meant to be reused and recycled, an ID is meant to style only one element.\
IDs override the styles of types and classes, and since IDs override these styles, they should be used sparingly and only on elements that need to always appear the asme.

## __Specificity:__
Specificity is the order by which the browser decides which CSS styles will be displayed.\
A best practice in CSS is to style the elements while using the lowest degree of specificity so that if an element needs a new style, it's easy to override.

IDs are the most specific selector in CSS, followed by classes, and then type.\
Consider the code:
`<h1 class = 'headline'>Breaking News</h1>`
```css
h1 {
	color: red;
}

.headline {
	color: firebrick;
}
```
In the example code above, the color of the heading would be set to firebrick, as the class selector is more specific than the type selector.\
If an ID attribute (and selector) were added to the code above, the styles within the ID selector's body would override all other styles for the heading.

Overtime, as our files grow, many elements may have IDs, which makes CSS difficult to edit, since a new, more specific style must be created to change the style of an element.

To make styles easy to edit, it's best to style with a type selector, and if possible, use a class selector.\
If this isn't specific enough, we only then consider using an ID selector.

## __Chaining:__
When writing CSS rules, it's possible to require an HTML element to have two or more CSS selectors at the same time.\
This is done by combining multiple selectors, which we refer to as chaining.\
For example, if there was a special class for `<h1>` elements, the CSS would look like this:
```css
h1.special {

}
```
The code above only selects the `<h1>` elements with a class of special. If a `<p>` element also had a class of special, the rule in the example would not style the paragraph.

## __Descendant Combinator:__
In addition to chaining selectors to select elements. CSS also supports selecting elements that are nested within other HTML elements, also known as descendants.\
Consider:
```html
<ul class = "main-list">
	<li> . . . </li>
	<li> . . . </li>
	<li> . . . </li>
</ul>
```

The nested `<li>` elements are descendants of the `<ul>` element and can be selected with the descendant combinator like so:
```css
.main-list li {

}
```
The code above has .main-list select the element with the .main-list class (the `<ul>` element).\
The descendant `<li>`'s are selected by adding li to the selector, separated by a space.\
This results in .main-list li as the final selector.\
Selecting elements in this way can make our selectors even more specific by making sure they appear in the context we expect.

## __Chaining and Specificity:__
Adding more than one tag, class, or ID to a CSS selector increases the specificity of the CSS selector.\
Example:
```css
p {
	color: blue;
}

.main p {
	color: red;
}
```
Both of these CSS rules define what a `<p>` element should look like.\
Since .main p has a class and a p type as its selector, only the `<p>` elements inside the .main element will appear red.\
This occurs despite there being another more general rule that states `<p>` elements should be blue.

## __Multiple Selectors:__
In order to make CSS more concise, it's possible to add CSS styles to multiple CSS selectors all at once.\
This prevents writing repetitive code.\
Consider:
```css
h1 {
	font-family: Georgia;
}

.menu {
	font-fmaily: Georgia:
}
```
Instead of writing font-family: Georgia twice for two selectors, we can separate the selectors by a comma to apply the same style to both, like this.
``` css
h1, .menu {
	font-family: Georgia;
}
```
By separating the CSS selectors with a comma, both the `<h1>` elements and the elements with the menu class will receive the font-family: Georgia styling.

## __Review:__
- CSS can select HTML elements by type, class, ID, and attribute.
- All elements can be selected using the universal selector.
- An element can have different states using the pseudo-class selector.
- Multiple CSS classes can be applied to one HTML element.
- Classes can be reusable, while the IDs can only be usedonce.
- IDs are more specific than classes, and classes are mroe specific than type. That means IDs will override any styles from a class, and classes will override any styles from a type selector.
- Multiple selectors can be chained (.) together to select an element. This raises the specificity but can be necessary.
- Nested elements can be selected by separating selectors with a space (goes after).
- Multiple unrelated selectors can receive the same tyles by separating the selector names with commas.