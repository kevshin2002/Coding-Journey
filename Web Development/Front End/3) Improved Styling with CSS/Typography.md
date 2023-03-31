# __CSS Typography__
This lesson will go over typography, or the art of arranging text on a page. It'll cover:
- How to style and transform fonts.
- How to lay text out on a page
- How to add external fonts to your web pages.

## __Font Family__
The font of an element can be changed using the `font-family` property.\
Example:
```css
h1 {
    font-family: Arial;
}
```
In the example above, the font family for all `<h1>` heading elements will be set to Arial.

### __Multi-Word Values__
When specifying a typeface with multiple words, like Times New Roman, it's recommended to use quotation marks (`' '`) to group the words together.\
Example:
```css
h1 {
    font-family; 'Times New Roman';
}
```
### __Web Safe Fonts__
There's a selection of fonts that will appear the same across all browsers and operating systems and they're referred to as web safe fonts. 

https://www.cssfontstack.com/


### __Fallback Fonts and Font Stacks__
WEb safe fonts are good fallback fonts that can be used if our preferred font is not available.\
Example:
```css
h1 {
    font-family: Caslon, Georgia, 'Times New Roman';
}
```
In the example, Georgia and Times New Roman are the fallback fonts for Caslon. When we specify a group of fonts, we create what is known as a __font stack__.

A font stack contians usually a list of similar-looking fonts. The browser will first try to use the Caslon font, then the Georgia, and then the Times New Roman if fonts are not available.

### __Serif and Sans-Serif__
The fonts Caslon, Georgia, and Times New Roman are Serif fonts.\
Serif fonts have extra details on the ends of each letter, as opposed to Sans-Serif fonts, which do not have the extra details.

![](https://content.codecademy.com/courses/web-101/htmlcss1-diagram__fontanatomy.svg)

serif and sans-serif are also keyword values that can be added as a final fallback font if nothing else in the font stack is available.\
Example:
```css
h1 {
    font-family: Caslon, Georgia, 'Times New Roman', serif;
}
```

## __Font Weight__
In CSS, the `font-weight` property controls how bold or thin text appears and can be specified with keywords or numerical values.

The font-weight property can take any one of these keyword values:
- bold : Bold font weight
- normal : Normal font weight (default)
- lighter : One font weight lighter than the element's parent value.
- bolder : One font weight bolder than the element's parent value

### __Numerical Values__
Numerical values acn range from 1 to 1000 where it's lightest to darkest. The common practice is to use increments of 100. The font weight of 400 is equal to the keyword value of normal and a font weight of 700 is equal to bold.\
Example:
```css
.left-section {
    font-weight: 700;
}

.right-section {
    font-weight: bold;
}
```
Both elements will appear bold.

It's important to note that not all fonts can be assigned a numeric font weight and not all numeric font weights are available to all fonts. It's a good practice to look up the font before using font-weight to see if it's applicable.

## __Font Style__
We can also italicize text with the font-style property.\
Example:
```css
h3 {
    font-style: italic;
}
```
The `italic` value causes text to appear in italics. The `font-style` property also has a `normal` value which is the default.

## __Text Transformation__
Text can also be styled to appear in either all uppercase or lowercase with the `text-transform` property.
```css
h1 {
    text-transform: uppercase;
}
```
The code above will format all `<h1>` elements to appear in `uppercase`, regardless of the case used for the heading within the HTML code. Alternative, we could use `lowercase` for lowercase format.

The usage for this is that depending on the type of content a web page displays, it may make sense to always style a specific element in all uppercase or lowercase.

For example, a website that reports breaking news may decide to format all `<h1>` elements such that they always appear in all uppercases. It's to also avoid uppercase text in the HTML file, which could make code difficult to read.

## __Text Layout__
We can also control how text can be displayed or laid out within the element's container.

### __Letter Spacing__
The `letter-spacing` property is used to set the horizontal spacing between the individual characters in an element. It's not common to set the spacing between letters but it can sometimes help the readability of certain fonts or styles. The property take length values in units such as `2px` or `0.5em`.\
Example:
```css
p {
    letter-spacing: 2px;
}
```
In the example above, each character in the paragraph element will be separated by 2 pixels.

### __Word Spacing__
We can also set the space between words with the `word-spacing` property. It's not common as well but it helps readability of bolded or enlarged text. It also takes length values in units.\
Example:
```css
h1 {
    word-spacing: 0.3em;
}
```
It's recommended to use `em` values because the spacing can be set based on the size of the font.

### __Line Height__
![](https://content.codecademy.com/courses/updated_images/htmlcss1-diagram__leading_updated_1-01.svg)

We can use the `line-height` property ot set how tall we want each line containing our text to be. Line height values can be a unitless number, such as `1.2` or a length value such as `12px`, `5%`, or `2em`.\
Example:
```css
p {
    line-height: 1.4;
}
```
The height between lines is set to `1.4`. Generally. the unitless value is preferred since it's responsive based on the current font size. In other words, if the `line-height` is specified by a unitless number, changing the font-size will automatically readjust the line height.

### __Text Alignment__
The `text-align` property which may be familiar aligns text to its parent element.
```css
h1 {
    text-align: right;
}
```
The `<h1>` element is aligned to the right side, instead of the default left.

## _Web Fonts__
Web fonts allow us to express our unique style through a multitude of different fonts found on the web.

Free font services like Google Fonts and Adobe Fonts host fonts that we can link to from our HTML document with a provided `<link>` element.

We can also use fonts from paid font distributors like fonts.com by downloading and hosting them with the rest of our site's files.

We can also create a @font-face ruleset in our CSS stylesheet to link to the relative path of the font file.

Both techniques for including web fonts into our site allow us to go beyond the sometimes "traditional" appearance of web safe fonts. 

## __Web Fonts Using <link>__
To use an online font service like Google Fonts, we browse and select the font that we want.

When we select a font, we'll be shown all of the different styles and can then select it for usage.
![](https://static-assets.codecademy.com/Courses/Learn-CSS/Typography/google-fonts-styles-page.png)
![](https://static-assets.codecademy.com/Courses/Learn-CSS/Typography/google-fonts-font-families.png)

When we're done selecting a font and its styles, we can review the family and a `<link>` element will be automatically generated for us to use.\
Example:
```html
<head>
  <!-- Add the link element for Google Fonts along with other metadata -->
  <link href="https://fonts.googleapis.com/css2?family=Roboto:wght@100&display=swap" rel="stylesheet">
</head>
```

```css
p {
    fonit-family: 'Roboto', sans-serif;
}
```

For the CSS to use `'Roboto'`, we must have the `<link>` in our html.

## __Web Fonts using @font-face__
Fonts can also be added using a `@font-face` ruleset in our CSs stylesheet instead of using a `<link>` element in our HTML document.

As mentioned earlier, fonts can be downloaded and come in a few different file formats such as:
- OTF (OpenType Font)
- TTF (TrueType Font)
- WOFF (Web Open Font Format)
- WOFF2 (Web Open Font Format 2)

The different formats are a progression of standards for how fonts will work with different browsers, with WOFF2 being the most progressive.

It's a good idea to include TTF, WOFF, and WOFF2 formats with our `@font-face` rule to ensure compatability on all browsers.

Within the "Selected Families" section, we can download the font files. The files will be downloaded in a single format.

![](https://static-assets.codecademy.com/Courses/Learn-CSS/Typography/google-fonts-download.png)

We can use additional tools to generate additional file types for WOFF and WOFF2.

https://developer.mozilla.org/en-US/docs/Learn/CSS/Styling_text/Web_fonts#generating_the_required_code

We then move these files into our website's working directory and we're ready to use them.
```css
@font-face {
  font-family: 'MyParagraphFont';
  src: url('fonts/Roboto.woff2') format('woff2'),
       url('fonts/Roboto.woff') format('woff'),
       url('fonts/Roboto.ttf') format('truetype');
}
```
Explanation, line by line:
- The `@font-face` at-rule is used as the selector and is recommended to define it at the top of the CSS stylesheet.
- The font-family property is used to set a custom name for the odwnloaded font. The name can be anything but it must be surrounded by quotation marks. In this example, the font is named 'MyParagraphFont'
- The src property contains three values, each specifying the relative path to the font file and its format. In this example, the font files are stored inside a folder named fonts within the working directory.
- Note that the ordering for the different formats is important because our browser will start from the top of the list and search until it finds a font format that it supports.

Once the `@font-face` is defined, we can use the font in the stylesheet.

```css
p {
    font-family: 'MyParagraphFont', sans-serif;
}
```

## __Review__
- Typography is the art of arranging text on a page
- Text can appear bold or thin with the `font-weight` property
- Text can appear in italics with the `font-style` property
- The vertical spacing between lines of text can be modified with the `line-height` property
- Serif fonts have extra details on the ends of each letter. Sans-Serif do not.
- Fallback fonts are used when a certain font is not installed on a user's computer
- The `word-spacing` property changes how far apart individual words are.
- The `letter-spacing` property changes how far apart individual letters are.
- The `text-align` property changes the horizontal alignment of text.
- Google Fonts provides free fonts that can be used in an HTML file with the `<link>` tag or  the `@font-face` property.
- Local fonts can be added to a document with the `@font-face` property and the path to the font's source.
