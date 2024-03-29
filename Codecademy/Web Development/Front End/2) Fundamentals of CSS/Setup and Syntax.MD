# __Setup and Syntax__
## __Intro to CSS__
HTML is the fundamental structure of every web page, but is visually unappealing on its own.\
Cascading Style Sheets or CSS is a language web developers use to style the HTML content on a web page.

We can modify colors, font types, font sizes, images, element positioning, and more.

## __CSS Anatomy__
There are two different methods or syntaxes for writing CSS code.\
The first syntax shows CSS applies as a ruleset, while the second shows it written as an inline style.

### __CSS ruleset__
```css
p{
	color: blue;
}
```
`selector` : p\
`declaration block` :
```css
{
	color: blue;
}
```
`declaration` : color: blue;\
`property` : color\
`value` : blue

### __CSS inline style__
```html
<p style = 'color: blue;'>Hello World!</p>
opening tag
<p style = 'color: blue;'>
```

`attribute` : style = 'color:blue;'\
`declaration` : color: blue;\
`property` : color\
`value` : blue

The anatomy of both methods does share common features.\
Both syntaxes contain a declaration.\
Declarations are the core of CSS.\
They apply a style to the selected element.\
The `<p>` element has been selected in both syntaxes and will be styled to display the text in blue.

Understanding that a declaration is used to style a selected element is key to learning how to style HTML documents with CSS.\
The terms below explain each of the labels:

## __Ruleset Terms__
`Selector` - the beginning of the ruleset used to target the element that will be styled.\
`Declaration Block` - The code in-between (and including) the curly braces ({}) that contains the CSS declaration(s).\
`Declaration` - The group name for a property and value pair that applies a style to the selected element.\
`Property` - The first part of the declaration that signifies what visual characteristics of the element is to be modified\
`Value` - The second part of the declaration that signifies the value of the property.

## __Inline Style Terms__
`Opening Tag` - The start of an HTML element. This is the element that will be styled.\
`Attribute` - The style attribute is used to add CSS inline styles to an HTML element.\
`Declaration` - The group name for a property and value pair that applies a style to the selected element\
`Property` - The first part of the declaration that signifies what visual characteristics of the element is to be modified\
`Value` - The second part of the declaration that signifies the value of the property.

## __Inline Styles__
Although HTML and CSS are different, it's possible to write CSS code directly within HTML code using inline style.\
To style an HTML element, we add the style attribute directly to the opening tag. We then set the attribute equal to the CSS style(s) we want to apply.\
Example:
`<p style = 'color: red;'>I'm learning to code!</p>`

The code in the example above demonstrates how to use inline styling.\
The paragraph element has a style attribute within its opening tag. Then the attribute is set to color: red;, which sets the color of the paragraph text to red within the browser.\
If we want to add more than one style with inline styles, we simply keep adding to the style attribute.\
Note: We have to end styles with a semicolon.\
Example:
`<p style = 'color: red; font-size: 20px;'>I'm learning to code!</p>`

It's good to know that inline styles exist, but it's rarely used when creating websites.\
THere are circumstances where inline styling is necessary, so knowing how it works is good and recognizing it in HTML is also good knowledge.

## __Internal Stylesheet__
Inline styles are not good for scaling HTML elements.\
To style multiple elements, we'd have to do multiple inline styling on all, and if we were to add same elements, we'd have to keep it updated with the styling.\
HTML allows another form of CSS, which is to have its own section with a `<style>` element nested inside of the `<head>` element.\
The CSS code inside the `<style>` element is often referred to as an internal stylesheet.

An internal stylesheet has certain benefits and use cases over inline styles, but it's not the best practice.\
Understanding how internal stylesheets work though is a good knowledge to have.\
To create an internal stylesheet, a `<style>` element must be placed inside of the `<head>` element.
Example:
```html
<head>
	<style>
		p{
			color: red;
			font-size: 20px;
		}	
	</style>
</head>
```

The CSS code in the example above changes the color of all paragraph text to red and also changes the size of the text to 20 pixels.\
The syntax we use for inline styling is mostly the same and the main difference is that we instead specify which element to apply the styling.

## __External Stylesheet__
Developers avoid mixing code by storing HTML and CSS code in separate files (HTML files contain only HTML code, and CSS files contain only CSS code)\
We can create an external stylesheet by using the .css file name extension, style.css.\
With an external stylesheet, we can write all the CSS code needed to style a page without sacrificing the readability and maintainability of our HTML file.

## __Linking the CSS File__
Even though we separated the two code, we need to link it. Otherwise, the HTML file won't be able to locate the CSS code, and the styling won't be applied.\
We can use the `<link>` element to link HTML and CSS files together.\
The `<link>` element must be placed within the head of the HTML file. 
It's a self-closing tag and requires the following attributes:\
`href` - like the anchor element, this value must be the address, or path, to the CSS file.\
`rel` - this attribute describes the relationship between the HTML file and the CSS file. Since it's a stylesheet, we set the value to stylesheet.\
Example:
`<link href = 'https://www.codecademy.com/stylesheets/style.css' rel = 'stylesheet'>`

Note that we used a URL to link a stylesheet.
If the CSS file is stored within the same directory as the HTML file, then we specify via a relative path:\
Example:
`<link href = './style.css' rel = 'stylesheet'>`

## __Review__
- The basic anatomy of CSS syntax written for both inline styles and stylesheets.
- Some commonly used CSS terms, such as ruleset, selector, and declaration.
- CSS inline styles can be written inside the opening HTML tag using the style attribute.
- Inline styles can be used to style HTML, but it is not the best practice.
- An internal stylesheet is written using the `<style>` element inside the `<head>` element of an HTML file.
- Internal stylesheets can be used to style HTML but are also not best practice.
- An external stylesheet separates CSS code from HTML, by using the .css file extension.
- External stylesheets are the best approach when it comes to using HTML and CSS.
- External stylesheets are linked to HTML using the `<link>` element.
