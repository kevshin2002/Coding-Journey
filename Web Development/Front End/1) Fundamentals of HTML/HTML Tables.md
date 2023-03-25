# __HTML Tables__
To create a table, we use:
```html
<table>

</table>
```

## __Table Rows:__
In HTML, we have to create all the rows, columns, and cells that will hold data.\
Example: (Will add table rows)
```html
<table>
	<tr>
	</tr>
	<tr>
	</tr>
</table>
```

## __Table Cell Elements:__
Each cell element must also be defined and can be done so using table data element, `<td>`\
Example:
```html
<table>
	<tr>
		<td>73</td>
		<td>81</td>
	</tr>
</table>
```
## __Table Headings:__
To add titles ro rows and columns, we can use the table heading element, `<th>`\
The table heading element is used just like a table data element, except with a relevant title.\
Like table data, a table heading must be placed within a table row.\
Example:
```html
<table>
	<tr>
		<th></th>
		<th scope = "col">Saturday</th>
		<th scope = "col">Sunday</th>
	</tr>
	<tr>
		<th scope = "row">Temperature</th>
		<td>73</td>
		<td>81</td>
	</tr>
</table>
```

In the code above, a new row is added to hold the three headings: a blank heading, a Saturday heading, and a Sunday heading.\
The blank heading creates the extra table necessary to align the table headings correctly over the data they correspond to.

The scope attribute can take one of two values:\
row - value makes the heading a row\
col - value makes the heading a column

## __Table Borders:__
A border can be added to a table using the border attribute and setting it equal to an integer. This integer represent the thickness of the border.\
This can only be found in older versions of HTML and doesn't work in newer versions.\
Example:
```html
<table border = "1">
	<tr>
		<td>73</td>
		<td>81</td>
	</tr>
</table>
```

The browser can still interpret it but it's not good practice. Instead, we use CSS to add style to HTML documents as it's easier to to do so.\
CSS Styling for Table Borders:
```css
table, td{
	border: 1px solid black;
}
```

## __Spanning Columns:__
Data can span columns using the colspan attribute. The attribute accepts an integer (greater than or equal to 1) to denote the number of columns it spans across.\
Example:
```html
<table>
	<tr>
		<th>Monday</th>
		<th>Tuesday</th>
		<th>Wednesday</th>
	</tr>
	<tr>
		<td colspan = "2">Out of Town</td>
		<td>Back in Town</td>
	</tr>
</table>
```
The example above will have "Out of Town" span the Monday and Tuesday table headings using the value 2 (two columns). The data "Back in Town" appear only under the Wednesday Heading.


## __Spanning Rows:__
Data can also span multiple rows using the rowspan.\
The rowspan attribute is used for data that spans multiple rows (perhaps an event goes on for multiple hours on a certain day).\
It accepts an integer (greater than or equal to 1) to denote the number of rows it spans across.\
Example:
```html
<table>
	<tr> <!-- Row 1 -->
		<th></th>
		<th>Saturday</th>
		<th>Sunday</th>
	</tr>
	<tr> <!-- Row 2 -->
		<th>Morning</th>
		<td rowspan = "2">Work</td>
		<td rowspan = "3">Relax</td>
	</tr>
	<tr> <!-- Row 3 -->
		<th>Afternoon</th>
	</tr>
	<tr> <!-- Row 4 -->
		<th>Evening</th>
		<td>Dinner</td>
	</tr>
</table>
```

The example above has four rows:\
First row - contains an empty cell and the two column headings.\
Second row - contains the "Morning" row heading, along with "work", which spans two rows under the "Saturday column". The "Relax" entry spans three rows under the "Sunday" column.\
Third row - contains the "Afternoon" row heading\
Fourth row - contains the "Dinner" entry

## __Table Body:__
A table can grow to contain a lot of data and become very long. When this happens, the table can be sectioned off so that it's easier to manage.\
Long tables can be sectioned off using the table body element `<tbody>`\
The `<tbody>` element should contain all of the table's data, excluding the table headings.\
Example:
```html
<table>
  <tbody>
    <tr>
      <th></th>
      <th>Saturday</th>
      <th>Sunday</th>
    </tr>
    <tr>
      <th>Morning</th>
      <td rowspan="2">Work</td>
      <td rowspan="3">Relax</td>
    </tr>
    <tr>
     <th>Afternoon</th>
    </tr>
    <tr>
      <th>Evening</th>
      <td>Dinner</td>
    </tr>
  </tbody>
</table>
```
## __Table Head:__
When a table's body is sectioned off, it makes sense to section off the table's column headings using the `<thead>` element.\
Example:
```html
<table>
  <thead>
    <tr>
      <th></th>
      <th scope="col">Saturday</th>
      <th scope="col">Sunday</th>
    </tr>
  </thead>
  <tbody>
    <tr>
      <th scope="row">Morning</th>
      <td rowspan="2">Work</td>
      <td rowspan="3">Relax</td>
    </tr>
    <tr>
     <th scope="row">Afternoon</th>
    </tr>
    <tr>
      <th scope="row">Evening</th>
      <td>Dinner</td>
    </tr>
  </tbody>
</table>
```
In the example above, the only new element is `<thead>`. The table headings are contained inside of this element. Note that the table's head still requires a row in order to contain the table headings.\
Additionally, only the column headings go under the `<thead>` element. We can use the scope attribute on a `<th>` element to indicate whether a `<th>` element is being used as a row heading ora  col heading.

## __Table Footer:__
The bottom part of a long table can also be sectioned off using the `<tfoot>` element>\
Example:
```html
<table>
  <thead>
    <tr>
      <th>Quarter</th>
      <th>Revenue</th>
      <th>Costs</th>
    </tr>
  </thead>
  <tbody>
    <tr>
      <th>Q1</th>
      <td>$10M</td>
      <td>$7.5M</td>
    </tr>
    <tr>
      <th>Q2</th>
      <td>$12M</td>
      <td>$5M</td>
    </tr>
  </tbody>
  <tfoot>
    <tr>
      <th>Total</th>
      <td>$22M</td>
      <td>$12.5M</td>
    </tr>
  </tfoot>
</table>
```
In the example above, the footer contains the totals of the data in the table. Footers are often used to contain sums, differences, and other data results.

## __Styling with CSS:__
Tables by default are bland. They have no borders, the font color is black, and the typeface is the same type used for other HTML elements.\
CSS, or Cascading Style Sheets, is a language that web developers use to style the HTML content on a web page.\
Using CSS, we can style tables:\
Example:
```css
table, th, td {
    border: 1px solid black;
    font-family: Arial, sans-serif;
    text-align: center;
}
```

## __Review:__
- The `<table>` element creates a table.
- The `<tr>` element add rows to a table.
- To add data to a row, we use `<td>` element.
- Table headings clarify the meaning of data. Headings are added with the `<th>` element.
- Table data can span columns using the colspan attribute
- Table data can span rows using the rowspan attribute.
- Tables can be split into three main sections: a head, a body, and a footer.
- A table's head is created with the `<thead>` element.
- A table's body is created with the `<tbody>` element.
- A table's footer is created with the `<tfoot>` element.