# __Links and Buttons__
A good website have signifiers that show which elements are links or buttons. A website without either is a bad website and will have bad user experiences.

## __Browser Link Styles__
Web browsers have always taken account of the importance of using signifiers for navigation. By default, browsers include a user agent stylesheet, which is a set of default styles included with the browser "user agent" for use on all web pages.

The HTMl5 specification defines a set of default behavior for rendering content.
https://html.spec.whatwg.org/multipage/rendering.html

These styles are used to ensure that a raw HTML file is styled to be reasonably readable by any user, and user agent stylesheets including styling for headings, tables, links, and more basic HTML elements. Most users do not see these styles too often, because designers override them with their own customer designs, however, it's important to note that maintaining a consistent user experience pattern, like the default behavior applied by browsers, is important for creating a consistent experience.

Traditionally, links are differentiated from regular text using blue text and underlines to draw users' attention to their clickability. Many websites and user agenet stylesheets still use these link styles.

Browsers also style two other link states:
- clicked ('active')
- clicked ('not yet followed')

The active indicate that it was previously visited and appear purple and not yet followed will appear red.

## __Link Styling__
The most important aspect of styling links is differentiating links from surrounding text.\
The default blue-text, underlined link style accomplishes this differentiation using two CSS properties:
- color
- text-decoration

These are both good ways to differentiate a link and they are strong ,familiar signifiers to most web users. Additionally, we could use CSS properties for background-color, font-weight, or border to indicate clickability.

Link styles should not be replicated in other page text. Link color should sufficiently contrast the text colors in the rest of the design. For example, only links should be underlined and non links shouldn't.

The anchor text or the text of the link should be descriptive of the linked resource. Although not a strictly design problem, it's important for usability, accessibility, and Search Engine Optimization.

## __Tooltips and Titles__
In addition to providing descriptive anchor text, it's sometimes helpful to provide additional context to explain links. This context can be particularly helpful when a link contains or consists of an image, icon, or another non-text element.

Additional context can be provided as text using the HTML `title` attribute. Although this property can be provided to any HTML element, it's extremely useful as additional context or advisory text for clickable elements.

Most browsers will display the text of a `title` attribute as a tooltip, meaning that when a user hovers their cursor over an element, the text will appear in a small box near the cursor.

To add tooltips to a clickable element like a link, add it as the `title` attribute.\
Example:
```html
<p>
  <a href="https://www.codecademy.com" title="Codecademy is an online learning platform">Codecademy</a> is the best place to learn to code!
</p>
```
This will have the text inside `title` to appear as a text when you hover over the element.

Note: The `title` attribute is HTML's built-in way of creating tooltips, but is known to cause a variety of accessibility issues.
https://developer.mozilla.org/en-US/docs/Web/HTML/Global_attributes/title#accessibility_concerns

To bypass this, it generally requires using CSS and JavaScript.

## __Hover States and Cursors__
In addition to styling elements themselves, other signifiers and visual feedback can be utilized during user interaction. The CSS pseudo-class `:hover` can be used to style elements on mouse hover.

For example, to change the color of link anchor text from blue to orange when a user hovers it, we use the following CSS code.
```css
a {
  color: blue;
}
 
a:hover {
  color: orange;
}
```

The first rule will set the link color to blue by default but when a user hovers over a link, the second rule will override the `color` attribute and cause it to turn orange. It will revert back to blue when the user moves the cursor away from the link.

In addition to any text style changes when hovering over a link, the user's cursor should change from default appearance to a pointing hand. The CSS `cursor` property is used to control this behavior. If we want to add this behavior to all `<a>` tags, we add the following code.
```css
a {
    cursor: pointer;
}
```
This behavior is generally included in browser user agent stylesheet and also exists in the HTML5 default styles.

HOver state styling should never be used as the sole indication that something is a link. users should not be forced to move their mouse over an entire document to tell what might be clickable and additionally, hover states are not accessible in mobile browsers.

## __Link States__
Links have four main states:
- normal (not clicked)
- hover
- active (clicked)
- visited

These four states have associated CSS pseudo-classes:
- :link
- :hover
- :active
- :visited

These four states can be used to give a full range of visual feedback to users about the status of their link interaction.

Each state should still make it clear that the element in question is a link, meaning it should not make text identical to non-link text or alter the link's appearance so much that users could perceive its behavior differently.

The ordering of link state pseudo-class rules is important to reveal the proper information. When a user hovers and then clicks a link, those styles should always override the static styling surrounding a user's history with the link (unvisited :link and :visited). The proper order of these rules are:
- :link
- :visited
- :hover
- :active

## __Skeumorphism and Flat Design__
Buttons are another fundamental element of user interaction and navigation and are called buttons because they're often modeled on the appearance and behavior of real life buttons.

The concept of UI elements that replicate or imitate real life counterparts is known as _skeuomorphism_.

In design, skeuomorphism is helpful for lowering the learning curve for users. If a user can draw a metaphor between a familiar real-life object and an interface element, they're more likely to know how to use it without training. For example, if a web button appears similar to a real life button on a physical interface, users can figure out what the way to interact with it, which is to press it.

Flat design is an alternative approach to skeuomorphism that embraces the fact that computer interfaces do not necessarily need to model real life interfaces. As users grow more familiar with digital displays and interfaces, designers see less need to model physical interactions and instead rely on other signifiers to indicate interactive elements. To generalize, flat design uses simplicity and lack of clutter for its UI elements.

Note: `<button>` is used to create these designs and comes with default stylish such as a `border` and `background-color`. 

## __Buttons: Skeumorphic styling__
Skeuomorphic button design aims to imitate the appearance and interactivity of a real-life button, often including a 'raised' appearance while the button is unpressed and a 'pressed' appearance when clicked.

Skeuomorphic button design can be implemented using image files, CSS rules, or a combination of both. CSS styles should be preferred over image files if possible since they're faster to load, have smaller files, and allow for a more consistent scaling and appearance across different screen size and resolutions.

If using CSS rules, the use of hover and/or active states is important in order to model interaction with a real button. For example, to implement a bare minimum 3-D button design, it should be:
```css
button {
  padding: 5px;
  border: 1px solid black;
  border-radius: 5px;
  text-decoration: none;
  box-shadow: 0px 5px;
}
 
button:hover {
  cursor: pointer;
}
 
button:active {
  margin-top: 5px;
  color: black;
  box-shadow: 0px 0px;
}
```

The default state of this `<button>` has basic or default styles which are `border` and `border-radius` properties with a slightly raised appearance with `box-shadow`.

The `:hover` is added for visual feedback and when the button is clicked (`:active`), the `box-shadow` is removed, and the `margin-top` moves the button down by `5px` which makes it appear pressed.

## __Buttons:Flat Design__
Flat design appears flat on the screen and designers must rely on other styling and signifiers to indicate clickability.

Flat design buttons commonly appear as rectangles, rounded rectangles, or circles and these shapes are ubiquitously for button elements. 

Since there are fewer obvious signifiers surrounding buttons in a flat design, they should be visually distinct from other page elements.

In flat designs in particular, button text is important for clarity. The possibility of user confusion is reduced by pairing buttons with specific, descriptive labels. A button with 'Click here' leaves many more open questions than a button that reads 'Submit Form'.

## __Buttons: Hover States__
Just as with links, buttons should make use of hover states and the `cursor: pointer` declaration. All the caveats about the shortcomings of hover states on mobile devices apply to buttons but their usage is still encouraged.

Users expect buttons to be clickable. Since buttons can consist of any number of total elements, all elements should be clickable, should display their clickability, and should result in the same behavior.

## __Review__
- Added styles to make links recognizable and distinguishable from ordinary text
- Added link styles that depend upon mouse interaction state, providing users with visual feedback for cursor hovering and mouse clicks.
- Added additional context text with the HTML `title` attribute.
- Styled buttons to be easily recognizable (in both skeuomorphic and flat design styles) using box shapes, border, hover, and active states.

There are more than these two methods to creatively design buttons.