# __HTML Structure__
HTML files require certain elements to set up the document properly.\
We can let web browsers know that we're using HTML by starting our document with a document type declaration.\
Example:
`<!DOCTYPE html>`

This declaration is an instruction and must be the first line of code in the HTML document. It tells the browser what type of document to expect and what version of HTML is being used.\
The browser assumes the latest HTML model if not specified.\
The code must also be saved in a file with an .html extension.

The `<html>` tag:\
The `<!DOCTYPE html>` declaration provides the browser with two pieces of information(the type of document and the HTML version to expect), but it doesn't add any HTMl structure or content.\
To create HTML structure and content, we must add opening and closing `<html>` tags after declaraing `<!DOCTYPE html>`\
Example:
```html
<!DOCTYPE html>
<html>

</html>
```

Anything between the opening and closing html tags will be interpreted as HTML code. Without these tags, the browser could incorrectly interpret the HTML code.

## __The Head__
We can give the browser some information about the page itself by adding a `<head>` element.\
The `<head>` element contains the metadata for a web page. Metadata is information about the page that isn't displayed directly on the web page.\
Unlike the information inside of the `<body>` tag, the metadata in the head is information about the page itself.

## __Page Titles__
We can change the title of the web page which is part of metadata using `<title>`\
Example:
```html
<!DOCTYPE html>
<html>
	<head>
		<title>My Coding Journal</title>
	</head>
</html>
```

## __Linking to Other Web Pages__
A powerful aspect of HTML and the internet is the ability to link to other web pages.\
We can add links to a web page by adding an anchor element `<a>` and including the text of the link in between the opening and closing tags.\
The anchor element also has an attribute, the href attribute. This attribute stands for hyperlink reference and is used to link to a path or the address to where a file is located.\
The paths provided to the href attribute are often URLs.\
Example:
`<a href = "https://www.wikipedia.org/">This Is A Link To Wikipedia</a>`

## __Opening Links in a New Window__
The anchor element can also use the target attribute. The target attribute specifies how a link should open.\
The target attribute is useful if we want users to read the linked website but hope they return to our web page.\
For a link to open in a new window, the target attribute requires a value of _blank. The target attribute can be added directly to the opening tag of the anchor element, just like the href attribute.\
Example:
`<a href = "https://en.wikipedia.org/wiki/Brown_bear" target = "_blank">The Brown Bear</a>`

Setting the target attribute to "_blank" instructs the browser to open the relevant Wikipedia page in a new window.\
In modern browsers, this'll open up new tabs rather than new windows.

## __Linking to a Relative Page__
Many sites also link to internal web pages like Home,About, and Contact.\
When making multi-page static websites, web developers often store HTML files in the root directory or a main folder where all the files for the project are stored.\
As the size of the project grows, we can use additional folders within the main folder to organize the code.

HTML files are often stored in the same folder and if they are, we can link web pages together using a relative path.\
Example:
`<a href = "./contact.html">Contact</a>`

This example uses the anchor tag with a relative path to link from the current HTML file to the contact.html file in the same folder.\
A relative path is a filename that shows the path to a local file  versus an absolute path which is stored in a different folder.\
The ./ tells the browser to look for the file in the current folder.

Relative Path - A file on the same website\
Absolute Path - A full URL

## __Linking At Will__
HTML allows us to turn nearly any element into a link by wrapping that element within an anchor element.\
With this technique, it's possible to turn images into links by simply wrapping the `<img>` element with an `<a>` element.\
Example:
```html
<a href = "https://en.wikipedia.org/wiki/Opuntia" target = "_blank">
<img src = "https://www.Prickly_Pear_Closeup.jpg" alt = "A red prickly pear fruit"/></a>
```
## __Linking to Same Page__
In order to link to a target on the same page, we must give the target an id:
```html
<p id = "top">This is the top of the page!</p>
<h1 id = "bottom">This is the bottom!</h1>
```
An id should be descriptive to make it easier to remembevr the purpose of a link. The target link is a string containing the # character and the target element's id.
Example:
```html
<ol>
	<li><a href = "#top">Top</a></li>
	<li><a href = "#bottom">Bottom</a></li>
</ol>
```

In this example, the links to are embedded in an ordered list. They appear in the browser as a numbered list of links.\
An id is super helpful for oganizing content belonging to a div.

## __Whitespace__
As code becomes more complex, it becomes increasingly difficult to keep track of how elements are related. \
Programmers use two tools to visualize the relationship between elements, which are whitespace and indentation.

Hard to read:
`<body><p>Paragraph 1</p><p>Paragraph 2</p><body>`

Easier to read:
```html
<body>
	<p>Paragraph 1</p>
	<p>Paragraph 2</p>
</body>
```
They both render the same.

## __Indentation__
We can also use indentation to make our code more readable.\
The World Wide Web Consortium or W3C, is responsible for maintaining the style standards of HTML.\
The W3C currently recommends 2 spaces of indentation when writing HTML code as a standard.

## __Comments__
HTML files also allow us to add comments.\
Comments begin with <~-- and end with -->\
Example:
<!-- This is a comment that the browser will not display. -->

Including comments within code is helpful for many reasons:
- They help understand code if we or other people come to look at it at a later time.
- They allow us to experiment with new code without having to delete old code.

## __HTML Tags Review__
- The `<!DOCTYPE html>` declaration should always be the first line of code in HTML files. This lets the browser know what version of HTML to expect.
- The `<html>` element will contain all of the HTML code.
- Information about the webpage, like the title, belongs within the `<head>` of the page.
- We can add a title to the webpage by using the `<title>` element, inside of the head.
- A webpage's title appears in a browser's tab.
- Anchor tags(`<a>`) are used to link to internal pages, external pages, or content on the same page.
- We can create sections on a webpage and jump to them using `<a>` tags and adding id's to the elements we wish to jump to.
- Whitespace between HTML elements help make code easier to read while not changing how elements appear in the browser.
- Indentation also helps make code easier to read. It makes parent-child relationships visible.
- )Comments are written in HTML using <!-- comment -->



