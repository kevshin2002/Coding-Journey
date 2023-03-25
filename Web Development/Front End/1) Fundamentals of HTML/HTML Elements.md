# __HTML Elements__
HTML provides structure to the content appearing on a website, such as images, text, or videos.\
HTML stands for **HyperText Markup Language**.

A markup language is a computer language that defines the structure and presentation of raw text.\
In HTML, the computer can interpret raw text that is wrapped in HTML elements.\
HyperText is text displayed on a computer or device that provides access to other text through links, also known as hyperlinks.\

HTML is composed of elements. Elements structure the webpage and define its contents.

`<p>Hello World!</p>`

`<p>`: opening tag\
`</p>`: closing tag\
`Hello World!`: content\
`<p>Hello World!</p>`: elememt

There are many tags that we can use to organize and display text and other types of content like images.

## __Overview of each Element:__
- HTML element - a unit of content in an HTML document formed by HTML tags and the text or media it contains\
- HTML Tag - the element name, surrounded by an opening and closing angle bracket.\
- Opening Tag - the first HTML tag used to start an HTML element.\
- Content - The information(text or other elements) contained between the opening and closing tags of an HTML element.\
- Closing Tag - the second HTML tag used to end an HTML element. Closing tags have a forward slash (/) inside of them, directly after the left angle bracket.

## __Body Element:__
One of the key HTML elements that is used to build a webpage is the body element. Only content inside the opening and closing body tags can be displayed to the screen.\
Once the file has a body, many different types of content including text, images, and buttons can be added to the body.\
```html
<body>

</body>
```
Note: While some browsers may render some content outside body tags as well to accommodate the occasional mistake in your HTML, not all browsers do this! \
The best way to ensure that all your HTML renders the same way in all browsers is to ensure that your elements remain within the opening and closing body tags.

## __HTML Structure:__
HTML is organized as a collection of family tree relationships. When an element is contained inside another element, it is considered the child of that element.\
The child element is said to be nested inside of the parent element.\
Example:
```html
<body>
	<p>This paragraph is a child of the body </p>
</body>
```

This example has `<p>` being the child element while the `<body>` is the parent element. As there can be multiple levels of nesting, this analogy can be extended to grandchildren, great-grandchildren, and beyond.\
The relationship between elements and their ancestor and descendant elements is known as a hierarchy.

Complicated Example:
```html
<body>
	<div>
		<h1>Sibling to p, but also grandchild of body</h1>
		<p>Sibling to h1, but also grandchild of body</p>
	</div>
</body>
```

This example has `<body>` being the parent of `<div>`. Both `<h1>` and `<p>` are children of the `<div>` element and since these two elements are at the asme level, they are considered siblings and are both grandchildren of the `<body>` element\
Understanding HTML hierarchy is important as child elements can inherit behavior and styling from parent elements.

## __Headings:__
Headings in HTML are similar to headings in other types of media. They are used to capture a reader's attention but can also be used to describe content.\
HTML follows a similar pattern. In HTML, there are six different headings, or heading elements.\
Headings can be used for a variety of purposes like titling sections, articles, or other forms of content.\

HTML Heading Elements from largest to smallest in size:
`<h1>` - used for main headings and rest are used for subheadings.\
`<h2>`\
`<h3>`\
`<h4>`\
`<h5>`\
`<h6>`

## __Divs:__
One of the most popular elements in HTML is the `<div>` element. `<div>` is short for "division" or a container that divides the page into sections.
They're very useful for grouping elements in HTML together.

Example:
```html
<body>
	<div>
		<h1>Why use divs?</h1>
		<p>Great for grouping elements!</p>
	</div>
</body>
```

`<div>`s don't have a visual representation but are useful when applying custom styles to HTML elements. `<div>`s allow us to group HTML elements to apply the same styles for all HTML elements inside.\
We can also style the `<div>` element as a whole.\
`<div>`s ca ncontain any text or other HTML elements, such as links, images, or  videos. It's always good practice to add two spaces of indentation when nesting elements inside of `<div>`s for better readability.

## __Attributes:__
If we want to expand an element's tag, we can do so using an attribute.\
Attributes are content added to the opening tag of an element and can be used in several different ways, from providing information to changing styling.\
Attributes are made up of the following two parts:\
The name of the attribute\
The value of the attribute

One commonly used attribute is the id. The id attribute is used to specify different content such as `<div>`s and is helpful when using an element more than once.\
When using an id on a `<div>`, we place it in the opening tag.\
Example:
```html
<div id ="intro">
	<h1>Introduction</h1>
</div>
```

## __Displaying Text:__
Displaying text can be done either via paragraph or span:\
Paragraphs`<p>` contain a block of plain text.\
`<span>` contains short pieces of text or other HTML. They're used to separate small peices of content that are on the same line as other content.\
Example:
```html
<div>
	<h1>Technology</h1>
</div>
<div>
	<p><span>Self-driving cars</span> are anticipated to replace up to 2 million jobs over the next tw odecades.</p>
</div>
```

There are two different `<div>` in this example and the second `<div>` contains a `<p>` with <span>. The `<span>` is useful when trying to target a specific piece of content that is inline or on the same line as other text.\
If we want to divide content into blocks, it's better to use a `<div>`.

## __Styling Text:__
HTML tags can also style text. The `<em>` tag emphasizes text, while the `<strong>` tag highlights important text.\
`<em>` tag generally render as italic emphasis.\
`<strong>` tag generally render as bold emphasis.


## __Line Breaks:__
The spacing between code in an HTML file doesn't affect the positioning of elements in the browser. If we want to modify the spacing in the browser, we can use HTML's line break element `<br>`.\
The line break element is unique because it is only composed of a starting tag. We can use it anywhere within the HTML code and a line break will show up.

## __Unordered Lists:__
We can use unordered list tag `<u1>` to create a list of items in no particular order. An unordered list outlines individual list items with a bullet point.\
The `<ul>` element should not hold raw text and won't automatically format raw text into an unordered list of items.\
Individual list items must be added to the unordered list using the `<li>` tag.\
The `<li>` or list item tag is used to describe an item in a list.

Example:
```html
<ul>
	<li>Limes</li>
	<li>Tortillas</li>
	<li>Chicken</li>
</ul>
```

## __Ordered Lists:__
Ordered lists are like unordered list except that each list item is numbered.\
Example:
```html
<ol>
	<li>Preheat the oven to 350 degrees.</li>
	<li>Mix whole wheat flour, baking soda, and salt.</li>
	<li>Cream the butter, sugar in separate bowl.</li>
	<li>Add eggs and vanilla extract to bowl.</li>
</ol>
```

## __Images:__
The <img> tag allows us to add an image to a web page. Most elements require both opening and closing tags but the `<img>` tag is a self-closing tag.\
Self-closing tags may include or omit the final slash - both will render properly.\
Example:
`<img src="image-location.jpg" />`

The `<img>` tag has a required attribute called src and this value must be set to the image's source or location of the image. \
In this case, the value is the uniform resource locator (URL). A URL is the web address or local address where a file is stored.

## __Image Alts:__
In order to make the web more inclusive, we need to consider what happens when assistive technologies such as screen readers come across image tags.\
The alt attribute which means alternative text, brings meaning to the images on our sites. The alt attribute can be added to the image tag just like the src attribute.\
The value of alt should be a description of the image.\
Example:
`<img src = "#" alt = "A field of yellow sunflowers" />`

The alt attribute also serves the following purposes:
- If an image fails to load on a web page, a user can mouse over the area originally intended for the image and read a brief description of the image.\
This is made possible by the description we provided in the alt attribute.
- Visually impaired users often browse the web with the aid of screen reading software.\
When we include the alt attribute, the screen reading software can read the image's description out loud to the visually impaired user.
- The alt attribute also plays a role in Search Engine Optimization (SEO), because search engines cannot "see" the images on websites as they crawl the internet.\
Having descriptive alt attributes can improve the ranking of our site.

## __Videos:__
HTML also supports displaying videos. Similar to the `<img>` element, the `<video>` element requires a src attribute with a link to the video source.\
Unlike the `<img>` element, the `<video>` element requires an opening and a closing tag.\
Example:
```html
<video src = "myVideo.mp4" width = "320" height = "240" controls>
	Video not supported
</video>
```

The video source `src` is myVideo.mp4. The source can be a video file that is hosted alongside the webpage or a URL that points to a video file hosted on another webpage.\
After the src attribute, the width and height attributes are used to set the size of the video displayed in the browser.\
The controls attribute instructs the browser ot include basic video controls such as pausing and playing.\
The text will only display if the browser is unable to load the video.

## __Review:__
- HTML stands for HyperText Markup Language and is used to create the structure and content of a webpage.
- Most HTML elements contain opening and closing tags with raw text or other HTML tags between them.
- HTML elements can be nested inside other elements. The enclosed element is the child of the enclosing parent element.
- Any visible content should be placed within the opening and closing `<body>` tags.
- Headings and sub-headings, `<h1>` to `<h6>` tags, are used to provide titles for sections of content.
- `<p>`, `<span>` and `<div>` tags specify text or blocks.
- The `<em>` and `<strong>` tags are used to emphasize text.
- Line breaks are created with the `<br>` tag.
- Ordered lists `<ol>` are numbered and unordered lists `<ul>` are bulleted.
- Images `<img>` and videos `<video>` can be added by linking to an existing source.

