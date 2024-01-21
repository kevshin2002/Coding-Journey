# __Affordances, SIgnifiers, and Clickability__
This covers the design concepts of affordances and signifiers as well as some of their applications in web design.

## __Clickability__
For users on the web, the mouse click is perhaps the most fundamental human-computer interaction. The web became the web partially through the power of _hypertext_, or text in one document that links to other documents or resources. To this day, users navigate the web largely through mouse clicks or finger taps on mobile and tablet devices.

## __Affordances__
Objects afford the ability of users to interact with them in various ways. For instance, a bench affords a person the ability to sit on it, but if it is not affixed to the ground, it also affords the user the ability to turn it over, thrwo, or perform any number of other actions. Even though the designer was probably not designing the bench with throwing in mind as the primary user behavior, the object still affords this action. Potentials for interaction are collectively called the _affordances_ of an object. 

## __Signifiers__
Signifiers are aspects of an object that a designer users to indicate potential and intended affordances of an object. For example, a teacup with no handle affords the ability to lift it and drink out of it. But designers and potters often add handles to signify that users can and should lift up the object and take a sip. The handle is an example of a common user experience pattern.

## __UX Patterns__
User experience (UX) patterns establishing reusable solutions to common problems. Handles are ubiquitous - they are used on objects of all shapes, sizes, and purposes to indicate that users can initiate an action by grabbing the handle with their hands.

## __Affordances and Signifiers in Web Design__
In computer interactions, the possible affordances of any computer are usually relatively limited. For example, a web application in a browser, a user can essentially click, execute key commands or type, and potentially execute touch events or voice commands.

Because of the relatively limited range of affordances, using proper signifiers is especially important to direct users properly. Users can click anywhere on a page, but not every click will have a result.
Often, websites and applications uses a combination of visual feedback and common UX patterns to help solve this issue.

In web browsers one common example of visual feedback is the cursor image itself; it can demonstrate what behavior might be expected from a click:
- a pointing hand indicates that an interaction will occur
- an i-beam shape indicate that text can be selected
- a four directional arrow show that an element can be moved
- and many more.

As stated above, the hovering, pointing hand cursor is a nearly universal pattern to indicate that an element or text is clickable. But users do not want to hover a cursor over every element to determine if it is clickable, and mobile devices do not have the ability to hover a cursor.

For this reason, designers also use signifiers to demonstrate elements that afford interaction. On the web, these signifers come in the form of CSS styles that differentiate clickable from non-clickable elements.

A ubiquitous example is the styling of hyperlinks where they're easily differentiated from other text in a block by different colors, underline styles, or font weights.

There's no universal "right answer" to the issues surrounding signifiers and affordances on the web, but web designers should always keep these ideas in mind while creating web designs and interfaces.