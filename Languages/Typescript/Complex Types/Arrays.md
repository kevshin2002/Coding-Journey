# Arrays
- [Introduction](#introduction)
- [Array Type Annotations](#array-type-annotations)
- [Multi-dimensional Arrays](#multi-dimensional-arrays)
- [Tuples](#tuples)
- [Array Type Inference](#array-type-inference)
- [Rest Parameters](#rest-parameters)
- [Spread Syntax](#spread-syntax)
- [Review](#review)

## Introduction
Javascript allows us to have elements of different types in arrays.
```ts
let firstArray = [1, 2, 3, 4];
let secondArray = [5, '6', [7]];
```

Since the elements are different types, people can mess with our arrays and it won't be safe to run the code. It could lead to undefined error in big large scale projects.

## Array Type Annotations
The TypeScript annotation for array types is straightforward: We put the [] after the element type.
```ts
let names : string[] = ['Danny', 'Samantha'];
```
Another way is:
```ts
let names : Array<string> = ['Danny', 'Samantha'];
```

By having a strongly typed enforcement, it helps find errors.

## Multi-dimensional Arrays
We can have other arrays such as numbers and booleans. We can make arrays of whatsoever and even multidimensional ones.
```ts
let array : string[][] = [['str1', 'str2'], ['more', 'strings']];
```

string[][] is short for (string[])[] which means that it's an array where every element has type string[]. The empty array [] is compatible with any array type.
```ts
let names : string[] = [] // No type errors.
let numbers : number[] = []; // No type errors
names.push('Isabella');
numbers.push(30);
```

## Tuples
In TypeScript, when an array is typed with elements of specific types, it's called a tuple. 

```ts
let ourTuple : [string, number, string, boolean] = ['Is', 7, 'our favorite number?', false]
```
Tuple types specify both the lengths and orders of compatible tuples and will cause an error if either of these conditions are not met.
```ts
let numbersTuple: [number, number, number] = [1,2,3,4]; // TypeError, numbersTuple should only have three elements.
let mixedTuple : [number, string, boolean] = ['h1', 3, true] // TypeError, the first element should be a number, the second a string, and the third a boolean.
```

In JavaScript, tuples act just like arrays and both have .length properties. We can access or change the elements of both using [index]. Despite this, they don't have compatible types within TypeScript. This means we can't assign an array to a tuple variable, even when the elements are of the correct type.
```ts
let tup : [string, string] = ['h1', 'bye'];
let arr : string[] = ['there', 'there'];
tup = ['there', 'there']; // No Errors.
tup = arr; // Type Error. An array cannot be assigned to a tuple.
```

## Array Type Inference
TypeScript can infer variable types from initial values and return statements. But with arrays, we don't know.
```ts
let examAnswers = [true, false, false]
```
Is it boolean[] or [boolean, boolean, boolean]? It is always the first since it's less restrictive and allows us to expand the array.
```ts
examAnswers[3] = true; // No Type error
```
As tuples have fixed lengths, we can't add additional boolean elements to a tuple.
```ts
let tupleOfExamAnswers: [boolean, boolean, boolean] = [true, false, false];
tupleOfExamAnswers[3] = true; // Type Error, The tuple only has 3 elements!
```

We can also see the same when using .concat():
```ts
let tup : [number, number, number] = [1,2,3];
let concatResult = tup.concat([4,5,6]); // concatResult has the value [1,2,3,4,5,6]
```
In this code, TypeScript infers the variable concatResult as an array of numbers, not a tuple.

The takeaway here is that type inference returns arrays. When we want tuples, we need to use explicit type annotations.

## Rest Parameters
A rest parameter allows a function to accept an indefinite number of arguments as an array.

An example without types:
```ts
function smush(firstString, ...otherStrings){
    let output = firstString;
    for(let i = 0; i < otherStrings.length; i++){
        output = output.concat(otherStrings[i]);
    }
    return output;
}
```
Calling smush('hi', 'there') returns the value 'hi there'.

```ts
smush('a', 'h', 'h', 'H', 'H', 'H', '!', '!'); // Returns: 'ahhHHH!'.
```

This works but it's not type safe as we don't want an error to occur when we call it via smush(1,2,3). 
We can fix this via:
```ts
function smush(firstString, ...otherStrings: string[]){

}
```
With this, the otherStrings MUST be an array of strings, which will throw us an error if we call it with the wrong types.

## Spread Syntax
TypeScript tuples pair with JavaScript's spread syntax. An example that's useful is:
```ts
function gpsNavigate(startLatitudeDegrees:number, startLatitudeMinutes:number, startNorthOrSouth:string, startLongitudeDegrees: number, startLongitudeMinutes: number, startEastOrWest:string, endLatitudeDegrees:number, endLatitudeMinutes:number , endNorthOrSouth:string, endLongitudeDegrees: number, endLongitudeMinutes: number,  endEastOrWest:string) {
  /* navigation subroutine here */
}
```
I would question the denial of objects in this situation or a query, but that's besides the point. In this situation, apparently we can use tuple variables that represent the starting and ending coordinates:
```ts
let codecademyCoordinates: [number, number, string, number, number, string] = [40, 43.2, 'N', 73, 59.8, 'W'];
let bermudaTCoordinates: [number, number, string, number, number, string] = [25, 0 , 'N' , 71, 0, 'W'];
```
We can then use JavaScript's spread syntax to write a very "readable" function call:
```ts
gpsNavigate(...codecademyCoordinates, ...bermudaTCoordinates);
// And by the way, this makes the return trip really convenient to compute too:
gpsNavigate(...bermudaTCoordinates, ...codecademyCoordinates);
// If there is a return trip . . . 
```

## Review
- The type annotations for arrays
- What tuples are, and how to do their type annotations.
- How type inference works with arrays and tuples.
- How to use the rest and spread operators with TypeScript.

