# __Visual Rules__
# __Introduction to Visual Rules:__
The purpose of CSS is to add style to web page, and each element on the page can have many style properties.\
Some of the basic properties relate to the size, style, and color of the element.

## __Font Family:__
Font refers to the technical term typeface, or font family.\
To change the typeface of text on our webpage, we can use the font-family property.\
Example:
```css
h1 {
	font-family: Garamond;
}
```
In the example above, the font family for all main heading elements has been set to Garamond.\
When setting typefaces on a web page, keep the following points in mind:\
The font specified must be installed on the user's computer or downloaded with the site.\
Web safe fonts are a group of fonts supported across most browsers and operating systems.\
Unless we are using web sage fonts, the font we choose may not appear the same for all browsers and operating systems.\
When the name of a typeface consists of more than one word, it's a best practice to enclose the typeface's name in quotes, like so:\
Example:
```css
h1 [
	font-family: 'Courier New';
]
```
## __Font Size:__
Changing the typeface isn't hte only way to customize the text.\
Oftentimes, different sections of a web page are highlighted by modifying the font size.

To change the size of text on our web page, we can use the font-size property.
Example:
```css
p {
	font-size: 18px;
}
```
The font-size of all paragraphs will be set to 18px.\
Note: A pixel is an absolute unit 1/96th of an inch (not physical)

Two other units: em and rem (relative to fonts)
- em - relative to the font-size of an element
- rem - relative to the font-size of the html element, defaults to browser's font sizeif not defined (16 px usually).

These two units are more natural to responsive design whereas pixels are not.

## __Font Weight:__
In CSS, the font-weight property controls how bold or thin text appears.\
Example:
```css
p {
	font-weight: bold;
}
```
All paragraphs on the web page will appear bolded.\
The font-weight property has another value which is normal.\
This exists to selectively partition different font-weights.\
For example, if we wanted all text on the web page to appear bolded, we can do that but select certain text to appear normal.

## __Text Align:__
No matter how much styling is applied to text(typeface, size, weight, etc.), the text always appears on the left side of the container in which it resides.\
To align text, we can use the text-align property. The text-align property will align text to the element that holds it, otherwise known as its parent.\
Example:
```css
h1 {
	text:align: right;
}
```
The text-align property can be set to one of the following commonly used values:
- left - aligns text to the left side of its parent element, which in this case is the browser.
- center - centers text inside of its parent element.
- right - aligns text to the right side of its parent element.
- justify - spaces out text in order to align with the right and left side of the parent element.

## __Color and Background Color:__
Color can affect the following design aspects:
- Foreground color
- Background color

Foreground oolor is the color that an element appears in.\
For example, when a heading is styled to appear green, the foreground color of the heading has been styled.\
Conversely, when a heading is styled so that it's background appears yellow, the background color of the heading has been styled.

In CSS, these two design aspects can be styled with the following two properties:
- color: this property styles an element's foreground color
- background-color: this property styles an element's background color
Example:
```css
h1 {
	color: red;
	background-color: blue;
}
```
The text of the heading will appear red and the background of the heading will appear blue.

## __Opacity:__
Opacity is the measure of how transparent an element is. It's measured from 0 to 1, with 1 representing 100% or fully visible and 0 representing 0%.\
Opacity can be used to make elements fade into others for a nice overlay effect.\
Example:
```css
.overlay {
	opacity: 0.5;
}
```
This will show whatever it's behind to show.

## __Background Image:__
CSS has the ability to change the background of an element.\
One option is to make the background of an element an image.\
This is done through the CSS property background-image.\
Example:
```css
.main-banner {
	background-image: url('https://www.example.com/image.jpg');
}
```
The background-image property will set the element's background to display an image.\
The value provided to background-image is a url. The url should be a URL to an image. The url can be a file within our project or it can be a link to an external site.

## __Important:__
`!important` can be applied to specific declarations, instead of full rules. It will override any style no matter how specific it is.\
As a result, it should almost never be used. Once `!important` is used, it's very hard to override.\
Example:
```css
p {
	color: blue !important;
}

.main p {
	color: red;
}
```
As `!important` is used on the p selector's color attribute, all p elements will appear blue, even though there is a more specific .main p selector that sets the color attribute to red.\
One justification for using `!important` is when working with multiple stylesheets. 
When we override the styles for one specific HTML element, we can use the `!important` property to ensure it isn't overriden.

## __Review:__
- The font-family property defines the typeface of an element.
- font-size controls the size of text displayed.
- font-weight defines how thin or thick text is displayed.
- The text-align property places text in the left, right, or center, of it's parent container or (justify).
- Text can have two different color attributes: color and background-color. color defines the color of the text and background-color defines the color behind the text.
- CSS can make an element transparent with the opacity property.
- CSS can also set the background of an element to an image with the background-image property.
- The !important flag will override any style, however, it should almost never be used, as it's extremely difficult to override.

