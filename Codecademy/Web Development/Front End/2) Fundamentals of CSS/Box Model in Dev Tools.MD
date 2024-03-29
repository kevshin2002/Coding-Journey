# __Box Model in Dev Tools__
All HTML elements are made up of four components:
- a content container
- padding
- border
- margin

We use these four element properties and use them to position elements on a web page.\
This note will introduce how Google Chrome's DevTools can be used to view the box around each element on a web page.

## __View Box Model Dimensions with DevTools__
We can use Google Chrome's DevTools to view the box around every element on a web page.\
There are a few different ways to open DevTools, depending on our platform:\

### __Mac__
command + option + i\
View > Developer > Developer Tools\
Chrome 3 dot menu: > More Tools > Developer Tools

### __Windows__
contrl + shift + i\
F12\
Chrome 3 dot menu: > More Tools > Developer Tools

Once we have DevTools open, we navigate to the Elements tab.\
In this tab, we can view all of the elements on the current page.\
We can then select the element of interest, which will open a new column on the right side of DevTools.\
We can then select the tab labeled Computed on the top of the rightmost column.

The selected element's box should appear at the top of the pane.\
Hoveringe over each property of the box will cause the property to be highlighted in the web page.

If we know the element we want to inspect, we can just right click the element we want to observe and select the inspect button.\
This will display DevTools on the right side of the browser with the element selected in the Elements tab.

Note: If we inspect an element and find that the border is set to -, adding a numerical value will not make a border appear.\
The border color, style, and width must be set in the CSS document in order to see the border.
