# __HTML Forms__

## __Introduction to HTML Forms:__
Forms are a part of everyday life.\
When we use a physical form in real life, we write information and give it to someone to process.

We can use forms in HTML by using the `<form>` element, which is responsible for collecting information to send somewhere else.

## __How a Form Works:__
We can think of the internet as a network of computers which send and receive information.\
Computers need an HTTP request to know how to communicate.\
The HTTP request instructs the receiving computer how to handle the incoming information.

The `<form>` element is a great tool for collecting information, but then we need to send that information somewhere else for processing.\
We need to supply the `<form>` element with both the location of where the `<form>`'s information goes and what HTTP request to make.\
Example:
```html
<form action = "/example.html" method = "POST">
</form>
```

In this example, we created a skeleton for a `<form>` that will send information to example.html as a POST request:\
The action attribute determines where the information i sent.\
The method attribute is assigned a HTTP verb that is included in the HTTP request.

Note: HTTP verbs like POST do not need to be capitalized for the request to work, but it's done so out of convention.\
In the example above, we could have written method = "post" and it would still work.

The `<form>` element can also contain child elements. For instance, it would be helpful to provide a header so that users know what this `<form>` is about.\
Example:
```html
<form action = "/example.html" method = "POST">
	<h1>Creating a form</h1>
	<p>Looks like you want to learn how to create an HTML form. Well, the best way to learn is to play around with it.</p>
</form>
```

The example doesn't collect any user input but rather an interface for it.

## __Text Input:__
If we want to create an input field in our `<form>`, we need the `<input>` element.\
The `<input>` element has a type attribute which determines how it renders on the web page and what kind of data it can accept.

The first value for the type attribute we're going to explore is "text".\
When we create an `<input>` element with type = "text", it renders a text field that users can type into.\
Note:The default value of type is "text".

it's important that we include a name attribute for the `<input>` as without it, information in the `<input>` won't be send when the `<form>` is submitted.\
Example:
```html
<form action = "/example.html" method = "POST">
	<input type = "text" name = "first-text-field">
</form>
```
Once a user types into the field, it sets the value of the "value" attribute and is paired with the value of the name attribute and sent as text when the form is submitted.

When the form is submitted, the text "first-text-field = important details" will be send to /example.html.\
We could also assign a default value for the value attribute so that users have a pre-filled text field when they first see the rendered form.\
Example:
```html
<form action = "/example.html" method = "POST">
	<input type = "text" name = "first-text-field" value = "already pre-filled">
</form>
```

## __Adding a Label:__
For a user to properly identify an `<input>` we use the appropriately named `<label>` element.

The `<label>` element has an opening and closing tag and displays text that is written between the opening and closing tags.\
To associate a `<label>` and an `<input>`, the `<input>` needs an id attribute. We then assign the for attribute of the `<label>` element with the value of the id attribute of `<input>`.\
Example:
```html
<form action = "/example.html" method = "POST">
	<label for = "meal">What do you want to eat?</label>
	</br>
	<input type = "text" name = "food" id = "meal">
</form>
```
Note: if input is within label, then we do not the id as input is a child of label.

## __Password Input:__
If we want to censor sensitive input, we can use the type password for `<input>`\
An `<input type = "password">` will replace input text with another character like an asterisk or a dot.\
Example:
```html
<form>
	<label for = "user-password">Password: </label>
	<input type = "password" id = "user-password" name = "user-password">
</form>
```
## __Number Input:__
if we want our users to input a number, we can use the type: number.\
By setting type = "number" for an input, we can restrict what users type into the input field to just numbers and a few special characters like -, +, and ..\
We can also provide a step attribute which creates arrows inside the input field to increase or decrease by the value of the step attribute.\
Example:
```html
<form>
	<label for = "years">Years of Experience: </label>
	<input id = "years" name = "years" type = "number" step = "1">
</form>
```
## __Range Input:__
If we want to limit what number our users can type, we can consider using the "range" which creates a slide.\
To set the minimum and maximum values of the slider, we assign values to the min and max attribute of the input.\
We could also control how smooth and fluid the slider works by assigning the step attribute a value.\
Smaller step values will make the slider move more fluidly and larger step values will make the slider move more noticeably.\
Example:
```html
<form>
	<label for = "volume">Volume Control</label>
	<input id = "volume" name = "volume" type = "range" min = "0" max = "100" step = "1">
</form>
```
## __Checkbox Input:__
What if we presented multiple options to users and allow them to select any number of options?\
In a form, we would use the `<input>` element and set type to checkbox.\
Example:
```html
<form>
	<p>Chosoe your pizza toppings:</p>
	<label for = "cheese">Extra cheese</label>
	<input id="cheese" name = "topping" type = "checkbox">
	<br>
	<label for = "pepperoni">Pepperoni</label>
	<input id = "pepperoni" name = "topping" type = "checkbox" value = "pepperoni">
	<br>
	<label for = "anchovy">Anchovy</label>
	<input id = "anchovy" name = "topping" type = "checkbox" value = "anchovy">
</form>
```
Note: We assign values to the value attribute as the values aren't visible on the form itself.\
Each input has the same value for the name attribute. Using the same name for each checkbox groups the inputs together. However, each input has a unique id to pair with a label.

## __Radio Button Input:__
Checkboxes work well if we want to present users with multiple options and let them choose one or more of the options.\
However, what if we want to present multiple options and only allow for one selection?\
We would use radio buttons.\
Example:
```html
<form>
	<p>What is the sum of 1 + 1?</p>
	<input type = "radio" id = "two" name = "answer" value = "2">
	<label for = "two">2</label>
	<br>
	<input type = "radio" id = "eleven" name = "answer" value = "11">
	<label for = "eleven">11</label>
</form>
```
Radio buttons (like checkboxes) do not display their value.\
To gruop radio buttons together, we assign them the same name and only one radio button from that group can be selected.

## __Dropdown list:__
If we have a whole list of options, a better method is to use a dropdownlist to allow our users to choose one option from an organized list.\
Example:
```hmtl
<form>
	<label for = "lunch">What's for lunch</label>
	<select id = "lunch" name = "lunch">
		<option value = "pizza">Pizza</option>
		<option value = "curry">Curry</option>
		<option value = "salad">Salad</option>
		<option value = "ramen">Ramen</option>
		<option value = "tacos">Tacos</option>
	</select>
</form>
```
We use the `<select>` to create the dropdown list and `<option>` to populate the list.\
By default, only one of the options can be selected.

## __Datalist Input:__
Even if we have an organized dropdown list, if the list has a lot of options, it could be tedious for users to scroll through the entire list to locate one option.\
That's where using the `<datalist>` element comes in handy.

The `<datalist>` is used with an `<input type = "text">` element.\
The `<input>` creates a text field that users can type into and filter options from the `<datalist>`.\
Example:
```html
<form>
	<label for = "city">Ideal city to visit?</label>
	<input type = "text" list = "cities" id = "city" name = "city">

	<datalist id = "cities">
		<option value = "New York City"></option>
		<option value = "Tokyo"></option>
		<option value = "Barcelona"></option>
		<option value = "Mexico City"></option>
		<option value = "Melbourne"></option>
		<option value = "Other"></option>
	</datalist>
</form>
```
The input has a list attribute as is associated to the datalist via the id of the datalist and list of the input.

Note: While `<select>` and `<datalist>` share some similarities, there are differences.\
In the associated `<input>` element, users can type in the input field to search for a particular option. If none matches, they can still use what they typed in.\
When the form is submitted, the value of the `<input>`'s name and the value of the option selected, or what the user typed in, is sent as a pair.

## __Textarea element:__
When we need users to write in information that's alot, we can use `<textarea>`\
The `<textarea>` element is used to create a bigger text field for users to write more text.\
We can add the attributes rows and cols to determine the amount of rows and columns for the `<textarea>`.\
Example:
```html
<form>
	<label for = "blog">New Blog Post: </label>
	<br>
	<textarea id = "blog" name = "blog" rows = "5" cols = "30">
	</textarea>
</form>
```
If we want a default text inside, we would add text between the opening and closing tag.

## __Submit Form:__
Once we put in various input elements, we can create a submit button.\
To make a submit button, we use the type submit.\
Example:
```html
<form>
	<input type = "submit" value = "Send">
</form>
```
The text that value is assigned is what shows up as text on the button. If there isn't a value attribute, the default text, SUbmit shows up.

## __Review:__
- The purpose of a `<form>` is to allow users to input information and send it.
- The `<form>`'s action attribute determines where the form's information goes.
- The `<form>`'s method attribute determines how the information is sent and processed.
- To add fields for users to input information, we use the `<input>` element and set the type attribute to a field of our choosing:
- Setting type to "text" creates a single row field for thext input.
- Setting type to "password" creates a isngle row field that censors text input.
- Setting type to "number" creates a single row field for number input.
- Setting type to "range" creates a slider to select from a range of numbers.
- Setting type to "checkbox" creates a single checkbox that can be paired with other checkboxes.
- Setting type to "radio" creates a radio button that can be paired with other radio buttons.
- Setting type to "text" and adding the list attribute will pair the `<input>` with a `<datalist>` element if the list of `<input>` and the id of `<datalist>` are the same.
- Setting type to "submit" creates a submit button.
- A `<select>` element is populated with `<option>` elements and renders a dropdown list selection.
- A `<datalist>` element is populated with `<option>` elements and works with an `<input>` to search through choices.
- A `<textarea>` element is a text input field that has a customizable area.
- When a `<form>` is submitted, the name of the fields that accept input and the value of those fields are sent as name = value pairs.

