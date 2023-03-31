# __Form Validation__
## __Requiring an Input__
Sometimes we have fields in our `<form>`s which are not optional which means information must be provided before we can submit it.\
To enforce this rule, we can add the required attribute to an `<input>` element.\
Example:
```html
<form action = "/example.html" method = "POST">
	<label for = "allergies">Do you have any dietary restrictions?</label>
	<br>
	<input id = "allergies" name ="allergies" type = "text" required>
	<br>
	<input type = "submit" value = "Submit">
</form>
```
This will make the field a requirement to submit.

## __Set a Minimum and Maximum__
Another built-in validation we can use is to assign a minimum or maximum value for a number field, example:\
`<input type = "number"> and <input type = "range">`\
To set a minimum acceptable value, we use the min attribute and assign a value.\
To set a maximum acceptable value, we use the max attribute and assign a value.\
Example:
```html
<form action = "/example.html" method = "POST">
	<label for = "guests">Enter # of guests</label>
	<input id = "guests" name = "guests" type = "number" min = "1" max = "4">
	<input type = "submit" value = "Submit">
</form>
```

## __Checking Text Length__
To set a minimum number of characters for a text field, we add the minlength attribute and a value to set a minimum value.\
To set a maximum number of characters for a text field, we add the maxlength attribute and a value to set the maximum value.\
Example:
```html
<form action = "/example.html" method = "POST">
	<label for = "summary">Summarize your feelings in less than 250 characters</label>
	<input id = "summary" name = "summary" type = "text" minlength = "5" maxlength = "250" required>
	<input type = "submit" value = "Submit">
</form>
```

## __Matching a Pattern__
We can also add a validation to check how the text was provided.\
For cases when we want user input to follow specific guidelines, we use the pattern attribute and assign it a regular expression, or regex.\
Regular expressions are a sequence of characters that make up a search pattern.\
If the input matches the regex, the form can be submitted.

Example of a valid credit card number (14 to 16 digit number)\
Example:
```html
<form action = "/example.html" method = "POST">
	<label for = "payment">Credit Card Number (no spaces): </label>
	<br>
	<input id = "payment" name = "payment" type = "text" required pattern = "[0-9]{14,16}">
	<input type = "submit" value = "Submit">
</form>
```

Note: `[0-9]{14,16}` means inputs that are numbers from 0-9 and minimum of 14 and maximum of 16.

## __Quantifiers__
`+` - one or more\
`{3}` - exactly three time\
`{2,4}` - two to four times\
`{3,}` - three or more times\
`*` - zero or more times\
`?` - Once or none

## __Review__
- Client-side validations happen in the browser before information is sent to a server.
- Adding the required attribute to an input related element will validate that the input field has information in it.
- Assigning a value to the min attribute of a number input element will validate an acceptable minimum value.
- Assigning a value to the max attribute of a number input element will validate an acceptable maximum value.
- Assigning a value to the minlength attribute of a text input element will validate an acceptable minimum number of characters.
- Assigning a value to the maxlength attribute of a text input element will validate an acceptable maximum number of characters.
- Assigning a regex to pattern matches the input to the provided regex.
- If validations on a `<form>` do not pass, the user gets a message explaining why and the `<form>` cannot be submitted.
