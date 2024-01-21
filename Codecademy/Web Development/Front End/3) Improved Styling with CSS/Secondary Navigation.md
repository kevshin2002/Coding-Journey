# __Secondary Navigation__

## __Primary vs Secondary Navigation__
The primary navigation system typically contains the most important links and buttons that need to be displayed on every single page of the site.

Secondary navigation, or breadcrumb navigation, usually consists of a clickable list of pages or attributes that led to the current page. It can help users understand the extent of the site and also where they are currently.

For example, a shopping site may have a breadcrumb trail such as:

![](https://content.codecademy.com/courses/ui-breadcrumbs/UI_breadcrumb.svg)

### __Why Breadcrumbs?__
It's similar to the story of Hansel and Gretel where kids dropped breadcrumbs so they would be able to find their way back. It's also similar to using wires or hair to leave a trail behind.

### __Benefit of using breadrumbs___
Breadcrumb navigation provides a lot of benefits for users that come to random pages in a website through direct links or search results.

Even if they enter to a seemingly random page on the site, they have an idea of where they are in the website. The breadcrumb also hints at the extent of the site. For example, users could safely assume for the site above that it had shoes for other categories, shoes in different styles, and shoes in more colors.

Breadcrumbs provide a way for users to quickly jump backward in their navigation of the site. If a user wanted to browser another style of shoe, they could pick directly on the "Shoes" page and navigate to their desired style. Without it, they would manually need to click "back" twice in their browser or start their search over from the home page.

The decision to use breadcrumbs is a judgment call depending on the type, depth, and complexity of the site. This document will go over some of the benefits of including breadcrumb navigation, how to implement it using HTML and CSS, and some of the pitfalls to avoid.

## __Simple Examples of Breadcrumbs__
Breadcrumbs are usually displayed as a horizontal list of pages and take up minimal space. Users expect to find them in the header, left-aligned, and below any primary navigation.

Typically, they are separated with a ">" or a "/" symbol.
```css
.breadcrumb > li {
  display: inline;
}

.breadcrumb li+li::before {
	padding: 10px;
  content: ">";
}

.breadcrumb a {
  text-decoration: none;
}

.breadcrumb a:hover {
  color: red;
}
```
![](https://i.gyazo.com/3773246481ed088a8ccf7a84eaf1c44c.png)

## __Where do Breadcrumbs Lead__
To have our breadcrumbs lead to a new page, we need to set `href = #`. With this, a click will cause the page to scroll to the top of the current page.

In a full site, these breadcrumbs would link to their respective pages. This is done again by setting the `href` property to it's appropriate page.

Since breadcrumbs are typically relative to the current page, the breadcrumb list on each page needs to be different, however, as a user moves around the breadcrumb list, they should expect the breadcrumb style and list to stay consistent.

If the breadcrumb list is :\
`Fashion > Shoes > Flats > Brown`

and a user clicked on "Flats", then it should change to:\
`Fashion > Shoes > Flats`

and not\
`Shoes > Shopping > Flats`

## __Breadcrumb Styles__
When designing our own site, we need to make a judgement call if a approach is sufficient. If we want to invite the user to interact with the breadcrumbs, we must style them to make them a more prominent part of the page design.

The example below illustrates a couple of CSS tricks to create an arrow effect.
Example:
```css
.breadcrumb li a::before, .breadcrumb li a::after {
  content: "";
  position: absolute;
  border-color: darkcyan;
  border-style: solid;
  border-width: 15px 5px;
}
```
This uses `::before` and `::after` pseudo-elements to add filled rectangles with empty content before and after each list item.

```css
.breadcrumb li a::before {
  left: -10px;
  border-left-color: transparent;
}
```
By setting a portion of the border to be traansparent, it creates the tail of the arrow.

This works due to the fact that element borders are drawn from the center of the element. 

## __Breadcrumb Types__
There are three major types of breadcrumbs:
- Location
- Attribute
- Path

Location based breadcrumbs are based on where the user is with respect to the navigation structure of the website. In the shoe example, the first three `li` elements are location based.

Attribute based breadcrumbs are based on the attributes of the page or product that we're browsing. In our shoe example, the final two `li` elements are attribute based since we're shopping for shoes that are flats and brown. Since the order of these attributes are not prescriptive, we can display them at the same level in the UI if we wanted to.

Breadcrumbs can also be based on a user's unique path through the site. For example, if the user landed on the home page, and then browsed to the about page, and then to the registration page, thier breadcrumb trail will look like this:
` Home > About > Register `

With this implementation, each breadcrumb trail will be different for each user and each visit. For even mildly complex sites, the number of steps will become large. To simplify the display, the beginning of the trail is often abbreviated as so:

` ... > About < Register `

## __Breadcrumb Pitfalls__
Sometimes, it's not appropriate to use breadcrumbs as a means of secondary navigation within a website. Users expect breadcrumbs to behave a certain way and attempts to deviate from this may confuse them. Most users are expecting breadcrumbs to expose the hierarchy of the site or display attributes of the page they are on.

Path based breadcrumbs are unique to a user's journey and are not commonly implemented. We should only implement this if there's a compelling reason for it.

Although breadcrumbs are common, it's not the primary way users will navigate a site, and as such, should not be the only navigational structure.

In general, the rule of not adding anything extraneous to the design applies here and if the site only contains a few pages or if the pages in the breadcrumbs are already available through primary navigation, there is little reason to include it in the design.

## __Review__
- Use breadcrumbs to indicate where a user is and the extent of the site
- Breadcrumbs are implemented using unordered lists in HTML with custom CSS styling
- Three types of breadcrumbs exist:
- - location : based on hierarchical structure of site
- - attribute : based on attributes of current page or item
- - path : unique to a user's journey on the site
- Path based breadcrumbs can be confusing, only use if needed.
- Ensure breadcrumbs will add value before adding to a site.

