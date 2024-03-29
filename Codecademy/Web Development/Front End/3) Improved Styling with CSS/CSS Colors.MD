# __CSS Colors__
## __Introduction to Color__
CSS supports a wide variety of colors.\
These include named colors, like blue, black, and limegreen, along with colors described by a numeric value.\
Using a numeric system allows us to take advantage of the whole spectrum of colors that browsers support.

Colors in CSS can be described in three different ways:
- Named colors : english words that describe colors, also called keyword colors
- RGB : numeric values that describe a mix of red, green, and blue
- HSL : numeric values that describe a mix of hue, saturation, and lightness

## __Foreground vs Background__
It's important to make two distinctions about color.\
Color can affect the following design aspects:
- The foreground color
- The background color

Foreground color is the color that an element appears in.\
For example, when a heading is styled to appear green, the foreground color of the heading has been styled.

Conversely, when a heading is styled so that its background appears yellow, the background color of the heading has been styled.

In CSS, these two design aspects can be styled with the following two properties:
- color - this property styles an element's foreground color
- background-color - this property styles an element's background color
Example:
```css
h1 {
	color: red;
	background-color: blue;
}
```
## __Hexadecimal__
One syntax that we use to specify colors is called hexadecimal.\
Colors specified using this system are called hex colors.\
A hex color begins with a hash character (#) which is followed by three or six characters.\
The characters represent values for red, blue, green.\
Example:
```css
darkseagreen: #8FBC8F
sienna: #A0522D
saddlebrown: #8B4513
brown: #A52A2A
black:	#000000 or #000
white: #FFFFFF or #FFF
aqua #00FFFF or #0FF
```
The hexadecimal number system has 16 digits (0-15) and thus has letters and numbers.\
To represent 10-15, we use A-F.

Notice how black, white, and aqua, are all represented with both three characters and is characters.\
This can be done with hex colors whose number pairs are the same characters.\
In the example above, aqua can be represented as #0FF because both of the first two characters are 00 and the second and third pairs of characters are both Fs.\
Keep in mind that all three character hex colors can be represented with six characters (by repeating each character twice) but the same is not true in reverse.

We can include hex colors just as we would include named colors:\
background-color: #9932CC;

The letters can be uppercase or lowercase.

## __RGB Colors__
There is another syntax for representing RGB values, commonly referred to as "RGB value" or just RGB, that uses decimal numbers rather than hexadecimal numbers, and it looks like this.\
```css
Example:
h1 {
	color: rgb(23, 45, 23);
}
```
Each of the three values represent a color component, and each can have a decimal number value from 0 to 255.\
The first number represents the amount of red, the second is green, and the third is blue.\
These colors are exactly the same as hex, but with a different syntax and a different number system.

In general, hex and RGB color representations are equivalent.\
Which we choose is a matter of personal taste.\
That said, it's good to choose one and be consistent throughout our CSS, because it's easier to compare hex to hex and RGB to RGB.

## __Hex and RGB__
The hexadecimal and RGB color system can represent many more colors than the small set of CSS named colors.\
We can use this new set of colors to refine our web page's style.

In both hex and RGB, we have three values, one for each color.\
Each can be one of 256 values.\
Specifically, 256 * 256 * 256 = 16,777,216.\
This is the amount of colors that we can now represent, compared to roughly 140 named CSS colors.

## __Hue, Saturation, and Lightness__
The RGB color scheme is convenient because it's close to how colors are presented in computers internally. Another powerful system in CSS is called the hue-saturation-lightness color scheme, abbreviated as _HSL_.

The syntax for HSL is similar to the decimal form of RGB but it does differ in important ways.\
The first number represents the degree of the hue, and can be between 0 and 360.\
The second number and third numbers are percentages representing saturation and lightness.\
Example:
```css
color: hsl(120, 60%, 70%);
```
Hue is the first number and refers to an angle on a color wheel.\
Red is 0 degrees, green is 120 degrees, blue is 240 degrees, and red completes it at 360 degrees again (unit circle).\
![](https://content.codecademy.com/courses/learn-css-color/color_wheel_4_background.svg)

Saturation refers to the intensity or purity of the color.\
The saturation increases towards 100% as the color becomes richer and decreases as the color becomes grayer.

Lightness refers to how light or dark the color is.\
Halfway or 50% is normal lightness and near 100% is brighter which makes it white and near 0% is darker which makes it black.

HSL is convenient for adjusting colors. In RGB, making the color a little darker may affect all three color components. IN HSL, that's as easy as changing the lightness value.\
HSL is also useful for making a set of colors that work well together by selecting various colors that have the same lightness and saturation but different hues.

## __Opacity and Alpha__
All of the colors above have been opaque or non transparent.\
When we overlap two opaque elements, nothing from the bottom element shows through the top element.

In this section, we'll change the opacity or the amouunt of transparency of some colors so that some or all of the bottom elements are visible through a covering element.

TO use opacity in the HSL color scheme, use `hsla` instead of `hsl`, and four values instead of three.\
Example:
```css
color : hsla(34, 100%, 50%, 0.1);
```
The first three are the same values for hsl but the fourth value is the _alpha_ which determines the opacity.

Alpha is a decimal number from zero to one and goes from completely transparent to opaque.\
Alpha value can be thought of as the amount of background to mix with the foreground.\
When a color's alpha is below one, any color behind it will be blended in.\
The blending happens for each pixel and no blurring occurs.

The RGB color scheme has a similar syntax for opacity and is `rgba` instead of `rgb`.\
The first three values work the same as `rgb` and the last value is the alpha.\
Exmple:
```css
color: rgba(234, 45, 98, 0.33);
```

Although this is unconventional, something note worthy is how hex colors can also have an alpha value. If we add a two-digit hexadecimal value to the end of the six-digit representation (`#52BC8280`), or a one-digit hexadecimal value to the end of the three-digit representation (`#F00#`), we can change the opacity of a hexadecimal color.\
Hexa opacity ranges from `00` to `FF`.

Alpha can only be used with HSL, RGB, and hex colors.\
We can't add the alpha value to name colors like `green`.

There is, however, a named color keyword for zero opacity, `transparent`.\
It's equivalent to rgba(0, 0, 0, 0) and is used like any other color keyword.\
Example:
```css
color: transparent;
```

## __Review__
There are four ways to represent color in CSS:
- Named Colors : there are more than 140 named colors
- Hexadecimal or hex colors:
  - Hexadecimal is a number system that has sixteen digits, 0 to 9 followed by "A" to "F".
  - Hex values always begin with # and specify values of red, blue, and green using hexadecimal numbers such as `#23F41A`
  - Six-digit hex values with duplicate values fore ach RGB value can be shorted to three digits.
- RGB
  - RGB colors use the `rgb()` syntax with one value for red, one value for blue, and one value for green.
  - RGB values range from 0 to 255 and look like this: `rgb(7, 210, 50)`.
- HSL
  - HSL stands for hue (the color itself), saturation (the intensity of the color), and lightness (how light or dark a color is).
  - Hue ranges from 0 to 360 and saturation and lightness are both represented as percentages like this: `hsl(200, 20%, 50%).`
- We can add opacity to color in RGB and HSL by adding a fourth value, `a`, which is represented as a percentage.