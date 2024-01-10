## Table of Contents
- [Chapter One](#chapter-one)
- - [Building Blocks of a Web Application](#building-blocks-of-a-web-application)
- - [What is React?](#what-is-react)
- - [What is Next.js?](#what-is-nextjs)
- [Chapter Two](#chapter-two)
- - [Rendering User Interface](#rendering-user-interface)
- - [What is the DOM?](#what-is-the-dom)
- [Chapter Three](#chapter-three)
- - [Updating UI With Javascript](#updating-ui-with-javascript)
- - [HTML vs DOM](#html-vs-the-dom)
- - [Imperative vs Declarative](#imperative-vs-declarative-programming)
- [Chapter Four](#chapter-four)
- - [Getting Started with React](#getting-started-with-react)
- - [What is JSX?](#what-is-jsx)
- [Chapter Five](#chapter-five)
- - [Building UI With Components](#building-ui-with-components)
- - [Components](#components)
- - - [Creating Components](#creating-components)
- - - [Nesting Components](#nesting-components)
- - - [Component Trees](#component-trees)
- [Chapter Six](#chapter-six)
- - [Displaying Data with Props](#displaying-data-with-props)
- - - [Using Props](#using-props)
- - - [Using Variables in JSX](#using-variables-in-jsx)
- - - [Iterating through Lists](#iterating-through-lists)
- [Chapter Seven](#chapter-seven)
- - [Adding Interactivity with State](#adding-interactivity-with-state)
- - - [Listening to Events](#listening-to-events)
- - - [Handling Events](#handling-events)
- - [State and Hooks](#state-and-hooks)
- [Chapter Eight](#chapter-eight)
- - [From React to Next.js](#from-react-to-nextjs)
- [Chapter Nine](#chapter-nine)
- - [Installing Next.js](#installing-nextjs)
- - [Creating Our First Page](#creating-our-first-page)
- - [Running the Development Server](#running-the-development-server)
- [Chapter Ten](#chapter-ten)
- - [Server and Client Components](#server-and-client-components)
- - - [Server and Client Environments](#server-and-client-environments)
- - - [Network Boundary](#network-boundary)
- - - [Using Client Components](#using-client-components)

# Chapter One
## Building Blocks of a Web Application
When building modern applications, a few things must be considered:
- User Interface: How will users consume and interact with our application?
- Routing: How will users navigate between different parts of our application?
- Data Fetching: How will data live and how will we get it?
- Rendering: How will we render or content? Statically or dynamically?
- Integrations: What third party services will we use (CMS, Auth, Payments, etc) and how will we connect to them?
- Infrastructure: Where will we deploy, store, and run our application code? (Serverless, CDN, edge, etc).
- Performance: How will we optimize our application for end-users?
- Scalability: How will our application adapt as it grows?
- Developer Experience: How will the application be maintained?

## What is React?
React is a Javascript library for building interactive user interfaces which are the elements that users see and interact with on-screen.

![Diagram of UI](https://nextjs.org/_next/image?url=%2Flearn%2Fdark%2Flearn-react-components.png&w=1920&q=75&dpl=dpl_BgDMtkMC7Ys3CBykeL1toqez4tqp)

The React Library provides helpful functions (APIs) to build the interfaces but leaves it up to the developer how to use them within their application.

## What is Next.js?
Next.js is a React farmework that gives developers building blocks to create web applications. 

By framework, it means that Next.js handles the tooling and configuration needed for React, and provides additiional structure, features, and optimizations for our application.

![Diagram of Next.JS](https://nextjs.org/_next/image?url=%2Flearn%2Fdark%2Flearn-ecosystem.png&w=1920&q=75&dpl=dpl_BgDMtkMC7Ys3CBykeL1toqez4tqp)

We can use React to build our interfaces and then adopt Next.js features to solve common application requirements such as routing, data fetching, and caching.

# Chapter Two
## Rendering User Interface
To understand how React works, we need to know how browsers interpret our code to create or render user interfaces (UI).

When a user visits a web page, the server returns an HTML file to the browser that looks like this:

![Image of HTML and DOM](https://nextjs.org/_next/image?url=%2Flearn%2Fdark%2Flearn-html-and-dom.png&w=1920&q=75&dpl=dpl_BgDMtkMC7Ys3CBykeL1toqez4tqp)

The browser then reads this and constructs the Document Object Model (DOM).

## What is the DOM?
The DOM is an object representation of the HTML elements. It acts as a bridge between our code and the user interface, and has a tree like structure with parent and child relationships.

![Image of DOM and UI](https://nextjs.org/_next/image?url=%2Flearn%2Fdark%2Flearn-dom-and-ui.png&w=1920&q=75&dpl=dpl_BgDMtkMC7Ys3CBykeL1toqez4tqp)

We can use DOM methods and Javascript to listen to user events and manipulate the DOM, by selecting, adding, updating, and deleting specific elements in the user interface. DOM manipulation allows us to not only target specific elements, but also change their style and content.

# Chapter Three
## Updating UI with Javascript
We can update the UI with Javascript with the following code:

```html
<html>
    <body>
        <div id ="app"></div>
        <script type="text/javascript">
            // Select the div with id "app"
            const app = document.getElementById('app');

            // Create an HTML H1 element
            const header = document.createElement('h1');

            // Create text for the H1 element.
            const text = 'Develop. Preview. Ship.';
            const headerContent = document.createTextNode(text);

            // Append this text to the H1 element.
            header.appendChild(headerContent);

            // Append the H1 element so it comes right after the div.
            app.appendChild(header);
        </script>
    </body>
</html>
```

## HTML vs the DOM
The DOM of a page is different from the source code.
![Differences between HTML and DOM](https://nextjs.org/_next/image?url=%2Flearn%2Fdark%2Flearn-dom-and-source.png&w=1920&q=75&dpl=dpl_BgDMtkMC7Ys3CBykeL1toqez4tqp)

That's because the HTML represents the initial page content whereas the DOM represents the updated page content which was changed by the Javascript Code that is shown above.

Using Javascript to update the DOM is very powerful but verbose. We added all this code just to add an H1 with some text.

Using this approach becomes inefficient to scale, and so it's nice to describe what we want to show and let the computer figure out how to update the DOM instead.

## Imperative vs Declarative Programming
The above HTML and Javascript code is a good example of imperative programming. We are writing the steps for how the user interface should be updated, but when building user interfaces, a declarative approach is often preferred as it can speed up the development process. Instead of having to write DOM methods, it's oftentimes helpful if developers were able to declare what they want to show (in this example, an H1 tag with some text).

Imperative programming is thus just giving a chef a step by step instructions on how to make a pizza. Declarative programming is like ordering a pizza without being concerned about the steps it takes to make the pizza.

As such, React is a popular declarative library that we can use to build user interfaces. 

Note: HTML is a declarative language, but using Javascript to manipulate the DOM turns it into an imperative process.

# Chapter Four
## Getting Started with React
To get started with react, we must load two scripts from unpkg.com
```html
<html>
  <body>
    <div id="app"></div>
    <script src="https://unpkg.com/react@17/umd/react.development.js"></script>
    <script src="https://unpkg.com/react-dom@17/umd/react-dom.development.js"></script>
    <script type="text/javascript">
      const app = document.getElementById('app');
      const header = document.createElement('h1');
      const text = 'Develop. Preview. Ship.';
      const headerContent = document.createTextNode(text);
      header.appendChild(headerContent);
      app.appendChild(header);
    </script>
  </body>
</html>
```

Instead of directly manipulating the DOM with the vanilla JS, we can remove the DOM methods and add ReactDOM.render() from react-dom to render our h1 title inside our app.

```html
<html>
  <body>
    <div id="app"></div>
    <script src="https://unpkg.com/react@17/umd/react.development.js"></script>
    <script src="https://unpkg.com/react-dom@17/umd/react-dom.development.js"></script>
    <script src="https://unpkg.com/@babel/standalone/babel.min.js"></script>
    <script type="text/jsx">
      const app = document.getElementById('app');
      ReactDOM.render(<h1>Develop. Preview. Ship.</h1>, app);
    </script>
  </body>
</html>
```

If we try to run this in our browser, we'll get an error as what's inside the .render() function is not Javascript but JSX.

## What is JSX?
JSX is a syntax extension for JavaScript that allows us to desribe our UI in a familiar HTML-like syntax. JSX is convenient because we don't need to learn any new symbols ourside of HTML and Javascript.

JSX follows three rules:
- Returning a single root element.
- - We can encapsulate multiple elements in a parent if we want to return multiple things. If we don't want to have a parent, we can use a Fragment, which allows us to group elements without leaving any traces in the browser HTML tree.
- Close all the tags
- - All elements must have an accompanying </> tag.
- camelCase most of the things.
- - There are many reserved words, such it is best to camelCase. Example:
```html
<img 
  src="https://i.imgur.com/yXOvdOSs.jpg" 
  alt="Hedy Lamarr" 
  className="photo"
/>
```

The one drawback is that browsers don't understand JSX out of the box and needs a Javascript compiler such as Babel to transform JSX code into regular Javascript.

To add Babel, we simply add this script along with the React script from unpkg.

```html
<script src="https://unpkg.com/@babel/standalone/babel.min.js"></script>
```

We also want to make sure that the script type is text/jsx, so that Babel knows what code to transform.

```html
<script type="text/jsx">
  const app = document.getElementById("app")
  ReactDOM.render(<h1>Develop. Preview. Ship.</h1>, app)
</script>
```

React enables us to cut down reptititon. It is essentially a library that contains reusable snippets of code that performs tasks on our behalf.

# Chapter Five
## Building UI with Components
There are three core concepts of React that we must be familiar with to start building React applications.
- Components
- Props
- State

## Components
User interfaces can be broken down into smaller building blocks called components.

Components allow us to build self-contained, reusable snippets of code. We can think of it like LEGO where we take individual bricks to combine and create larger structures.
![Image of a Component Breakdown](https://nextjs.org/_next/image?url=%2Flearn%2Fdark%2Flearn-components.png&w=1920&q=75&dpl=dpl_BgDMtkMC7Ys3CBykeL1toqez4tqp)

This modularity allows our code to be more maintable as it grows as we can add, update, and delete components without touching the rest of our application.

### Creating Components
In React, components are functions.
```html
<script type = "text/jsx">
    const app = document.getElementByID("app")

    function Header() {
        return (<h1>Develop. Preview. Ship.</h1>)
    }

    ReactDOM.render(<Header/>, app)
</script>
```

Two key things to take is that the function is capitalized to differentiate between plain HTML and React. The argument of ReactDOM.render is also enclosed in angle brackets as all React components are treated like HTML elements.

### Nesting Components
Applications usually include more content than a single component. We can nest React components inside each other like we would regular HTML elements.

```JS
function Header() {
    return <h1>Develop. Preview. Ship.</h1>;
}

function HomePage() {
    return <div></div>;
}

ReactDOM.render(<Header />, app);
```

We can then nest the Header component inside the HomePage component.

```JS
function Header() {
  return <h1>Develop. Preview. Ship.</h1>;
}
 
function HomePage() {
  return (
    <div>
      {/* Nesting the Header component */}
      <Header />
    </div>
  );
}
 
ReactDOM.render(<Header />, app);
```

### Component Trees
We can keep nesting them to create component trees.

![Image of Component Tree](https://nextjs.org/_next/image?url=%2Flearn%2Fdark%2Flearn-component-tree.png&w=1920&q=75&dpl=dpl_BgDMtkMC7Ys3CBykeL1toqez4tqp)

By modularizing this, we can create 3 different components that each have their child components. This means we can reuse components in different places inside our app.

# Chapter Six
## Displaying Data with Props
```Javascript
function Header() {
  return <h1>Develop. Preview. Ship.</h1>;
}
 
function HomePage() {
  return (
    <div>
      <Header />
      <Header />
    </div>
  );
}
```

This code reuses the same content both times, so what if we want to pass different text or don't know the information ahead of time because we're fetching data from an external source?

Regular HTML elemments have attributes that we can use to pass pieces of information that change the behavior of those elements. For example, changing the src attribute of an img element changes the image that is shown. Changing the href attribute of an anchor tag changes the destination of the link.

In the same way, we can pass pieces of information asp roperties to React components. These are called props. As an example, consider the different variations of a button:

![Different Variations of an Image](https://nextjs.org/_next/image?url=%2Flearn%2Fdark%2Flearn-props.png&w=1920&q=75&dpl=dpl_AGVpExNSxGb3dC5jrZYnL2rzPEsj)

Similar to a JavaScript function, we can design components that accept custom arguments (or props) that change the component's behavior or what is visibly shown when it's rendered to the screen. Then we can pass these down from parent components to child components.

Note: In React, data flows down the component tree and is referred to as one-way data flow. State which will be discussed down below is passed from parent to child components as props.

## Using Props
We can pass a custom title prop to the Header component:
```js
function HomePage() {
  return (
    <div>
      <Header title="React" />
    </div>
  );
}
// Two ways to pass props
// Props
// Destructuring

function Header(props) {
  console.log(props); // { title: "React" }
  return <h1>Develop. Preview. Ship.</h1>;
}

function Header({ title }) {
  console.log(title); // "React"
  return <h1>Develop. Preview. Ship.</h1>;
}

```

Then we can replace the content of the h1 tag with the title variable.

```js
function Header({ title }) {
  console.log(title);
  return <h1>{title}</h1>;
}
```
We use curly braces which are special JSX syntax that allows us to write regular JS directly inside our JSX markup.

## Using Variables in JSX
While using curly braces, we can add any JS expression (something that evaluates to a single value).
- An object property with dot notation:
```js
function Header(props) {
  return <h1>{props.title}</h1>;
}
```
- A template literal:
```js
function Header({ title }) {
  return <h1>{`Cool ${title}`}</h1>;
}
```
- The returned value of a function:
```js
function createTitle(title) {
  if (title) {
    return title;
  } else {
    return 'Default title';
  }
}
 
function Header({ title }) {
  return <h1>{createTitle(title)}</h1>;
}
```
- Ternary Operators:
```js
function Header({ title }) {
  return <h1>{title ? title : 'Default Title'}</h1>;
}
```

We now have a component that's generic and can change via our props.

```js
function HomePage() {
  return (
    <div>
      <Header title="React" />
      <Header title="A new title" />
    </div>
  );
}
```

## Iterating through lists
It's common to have data that we need to show as a list. We can use array methods to manipulate our data and generate UI elements that are identical in style but hold different pieces of information.

For example:
```js
function HomePage() {
  const names = ['Ada Lovelace', 'Grace Hopper', 'Margaret Hamilton'];
 
  return (
    <div>
      <Header title="Develop. Preview. Ship." />
      <ul>
        {names.map((name) => (
          <li>{name}</li>
        ))}
      </ul>
    </div>
  );
}
```

React still needs something to uniquely identify items in an array so it knows which elements to update in DOM. We can use the names for now since they're currently unique, but we can use something like an item ID since it's unique.

```js
function HomePage() {
  const names = ['Ada Lovelace', 'Grace Hopper', 'Margaret Hamilton'];
 
  return (
    <div>
      <Header title="Develop. Preview. Ship." />
      <ul>
        {names.map((name) => (
          <li key={name}>{name}</li>
        ))}
      </ul>
    </div>
  );
}
```

# Chapter Seven
## Adding Interactivity with State
We can add interactivity through React with state and event handlers.

### Listening to Events
To make a button do something when it's clicked, we can use the onClick event.

```jsx
function HomePage() {
  // ...
  return (
    <div>
      {/* ... */}
      <button onClick={}>Like</button>
    </div>
  );
}
```

Event names are always camelcased, and onClick is one of the many possible events we can use to respond to user interaction.

### Handling Events
We can define a function to handle events whenever they are triggered.

```jsx
function HomePage() {
  // ...
  return (
    <div>
      {/* ... */}
      <button onClick={}>Like</button>
    </div>
  );
}
```

## State and Hooks
React has a set of functions called hooks which allows us to add additional logic such as state to our components. We can think of state as any information in our UI that changes over time, usually triggered by user interaction.

![Diagram of a Hook](https://nextjs.org/_next/image?url=%2Flearn%2Fdark%2Flearn-state.png&w=1920&q=75&dpl=dpl_AGVpExNSxGb3dC5jrZYnL2rzPEsj)

The React hook used to manage state is called useState().

The first item in the useState() array is the value and the second is the function to update the value. We can also pass in an argument to set the initial value of the state.

```jsx
function HomePage() {
  // ...
  const [likes, setLikes] = React.useState(0);
 
  function handleClick() {
    setLikes(likes + 1);
  }
 
  return (
    <div>
      {/* ... */}
      <button onClick={handleClick}>Likes ({likes})</button>
    </div>
  );
}
```

# Chapter Eight
## From React to Next.js
This is what the finished code looks like using React.
<html>
  <body>
    <div id="app"></div>
 
    <script src="https://unpkg.com/react@17/umd/react.development.js"></script>
    <script src="https://unpkg.com/react-dom@17/umd/react-dom.development.js"></script>
    <script src="https://unpkg.com/@babel/standalone/babel.min.js"></script>
 
    <script type="text/jsx">
      const app = document.getElementById("app")
 
      function Header({ title }) {
        return <h1>{title ? title : "Default title"}</h1>
      }
 
      function HomePage() {
        const names = ["Ada Lovelace", "Grace Hopper", "Margaret Hamilton"]
 
        const [likes, setLikes] = React.useState(0)
 
        function handleClick() {
          setLikes(likes + 1)
        }
 
        return (
          <div>
            <Header title="Develop. Preview. Ship." />
            <ul>
              {names.map((name) => (
                <li key={name}>{name}</li>
              ))}
            </ul>
 
            <button onClick={handleClick}>Like ({likes})</button>
          </div>
        )
      }
 
      ReactDOM.render(<HomePage />, app)
    </script>
  </body>
</html>

# Chapter Nine
## Installing Next.js
When using Next.js, we don't need to load react and react-dom scripts from unpkg.com. Instead, we need to install it using npm on our computer

To use Next.js, we need a Node.js version of 18.17 or above installed. 

To use next,, we create a new file called package.json with an empty object {} in the same directory as the index.html.

In the terminal, we then run 
```bash
npm install react@latest react-dom@latest next@latest
```

The package.json will be populated with project dependencies:
```json
{
  "dependencies": {
    "next": "^14.0.3",
    "react": "^18.2.0",
    "react-dom": "^18.2.0"
  }
}
```

There will also be a new file called pacakge-lock.json which contains detailed information about the exact version of each package.

We can go to our index.html and remove code so that it looks like this.
```jsx
import { useState } from 'react';
 
function Header({ title }) {
  return <h1>{title ? title : 'Default title'}</h1>;
}
 
function HomePage() {
  const names = ['Ada Lovelace', 'Grace Hopper', 'Margaret Hamilton'];
 
  const [likes, setLikes] = useState(0);
 
  function handleClick() {
    setLikes(likes + 1);
  }
 
  return (
    <div>
      <Header title="Develop. Preview. Ship." />
      <ul>
        {names.map((name) => (
          <li key={name}>{name}</li>
        ))}
      </ul>
 
      <button onClick={handleClick}>Like ({likes})</button>
    </div>
  );
}
```

We added the import { useState } from 'react'; at the top. Since this is all JSX, we can change it to .jsx or .js.

## Creating our First Page
Next.js uses file-system routing, which means that instead of using code to define the routes of our application, we can use folderes and files.

This is how we can create our first page in Next.js:
1. Create a new folder called app and move the index.js file inside it.
2. Rename the index.js file to page.js. This will be the main page of our application.
3. Add export default to our Homepage component to help Next.js distinguish which component to render as the main component of the page.

```jsx
import { useState } from 'react';
 
function Header({ title }) {
  return <h1>{title ? title : 'Default title'}</h1>;
}
 
export default function HomePage() {
  // ...
}
```

## Running the Development Server
To run our development server, we can add a "next dev" script to our package.json file:
```json
{
  "scripts": {
    "dev": "next dev"
  },
  "dependencies": {
    "next": "^14.0.3",
    "react": "^18.2.0",
    "react-dom": "^18.2.0"
  }
}
```

When we try to run ```bash npm run dev```, we will get an error.

![Image of Error](https://nextjs.org/_next/image?url=%2Flearn%2Fdark%2Flearn-usestate-rsc-error.png&w=1920&q=75&dpl=dpl_AGVpExNSxGb3dC5jrZYnL2rzPEsj)

This is because Next.js uses react server components, which is a new feature that allows react to render on the server. Server componnents don't support useState, so we need to use a client component instead.

The following chapter will differentiate the difference between Server and Client Component and fix this error.

We will also see that after running the command, we see a new file called lay.out, which was automatically created inside the app folder. This is the main layout of our application and can use it to add UI elements that are shared across all pages (navigation, footer, etc).

layout.js:
```js
export const metadata = {
  title: 'Next.js',
  description: 'Generated by Next.js',
};
 
export default function RootLayout({ children }) {
  return (
    <html lang="en">
      <body>{children}</body>
    </html>
  );
}
```

# Chapter Ten
## Server and Client Components
To understand how Server and Client components work, it's helpful to be familiar with two foundational web concepts:
- The environments our application code can be executed in: the server and the client
- The network boundary that separates server and client code.

### Server and Client Environments
![Image of Server and Client Boundary](https://nextjs.org/_next/image?url=%2Flearn%2Fdark%2Flearn-client-and-server-environments.png&w=1920&q=75&dpl=dpl_AGVpExNSxGb3dC5jrZYnL2rzPEsj)

The client refers to the browser on a user's device that sends a request to a server for our application code. It then turns the response it receives from the server into an interface the user can interact with.

The server refers to the computer in a data center that stores our application code, receives requests from a client, does some computation, and sends back an appropriate response.

Each environment has their own set of capabilities and constraints. For example, moving rendering and data fetching to the server can reduce the amount of code sent to the client, which can improve our application's performance. But, as earlier mentioned, to make our UI interfaace, we need to update the DOM on the client.

Therefore, the code that we write for the server and client is not always the same. Certain operations (data fetching or managing user state) are better suited for one environment over the other.

### Network Boundary
The network boundary is a conceptual line that separates the different environments.

In React, we can choose where to place the server-client network boundary in our component tree. For example, we can fetch data and render a user's post on the server, then render the interactive LikeButton for each post on the client. Likewise, we can create a Nav in our layout that is shared across pages but if we wanna show an active state for links, we can render the list of Link son the client.

![Image of Tree Diagram of Client and Server Module](https://nextjs.org/_next/image?url=%2Flearn%2Fdark%2Flearn-client-server-modules.png&w=1920&q=75&dpl=dpl_AGVpExNSxGb3dC5jrZYnL2rzPEsj)

Behind the scenes, the components are split into two module graphs. The server module graph contains all the components that are rendered on the server while the client module graph contains all components that are rendered on the client.

It's good practice to move our network boundary close to the leaves of our component tree, as we can improve our application performance by reducing the amount of code sent to the client.

### Using Client Components
Next.js uses server components by default as it improves our application's performance and means we don't have to take additional steps to adopt them.

So how do we fix useState inside a Server Component? We can fix thsi by moving the interactive "Like" button to a client component.

We can do this by creating an ew file called like-button.js inside the app folder taht exports a LikeButton component. This is analogous to C++ where we create a new class.

We export all the code into this function
```js
'use client';
 
import { useState } from 'react';
 
export default function LikeButton() {
  const [likes, setLikes] = useState(0);
 
  function handleClick() {
    setLikes(likes + 1);
  }
 
  return <button onClick={handleClick}>Like ({likes})</button>;
}
```

The 'use client' makes the file a client component (tells react to render it on the client). to use this button, we simply import the LikeButton component.

In our page.js, we import the component:
```jsx
import LikeButton from './like-button';
```

To use it, we simply write
```jsx
<LikeButton />
```

Next.js comes with Fast Refresh which means we don't have to rebuild our app to see our changes. It comes pre-configured with Next.js