# Types
- [What is TypeScript?](#what-is-typescript)
- [Type Inferences](#type-inferences)
- [Type Shapes](#type-shapes)
## What is TypeScript?
Typescript files end with the .ts extension. If we want react, we use .tsx to include JSX syntax. When running our TypeScript code, we run it through the transpiler which checks the code to see if it adheres to TypeScript's standards. A transpiler converts a language to another language, which in this case converts Typescript to valid Javascript code. During this process, the transpiler validates for errors.

Typescript is thus a superset of Javascript code. It has all the features of Javascript but adds some new features.

To run the transpiler, we simply run
```bash
tsc file1.ts file2.ts
```
or without the filenames to transpile all file within that directory. We then call node to run it.
```bash
node file1.js file2.js
```

## Type Inferences
Javascript has no types which means we can assign any value to a variable. This however, leads to undefined behavior in large scale programs as we need type safety. We can't have a string be modified in an int operation.

This is why in Typescript, when we declare a variable with an initial value of a certain data type, we can never reassign that variable with a different data type. This is called Type Inference which means that the data type of a variable must match the type of the value initially assigned to it at declaration.

TypeScript recognizes JS built in "primitive" data types:
- boolean
- number
- null
- string
- undefined

If we try to reassign a variable to a value of a different type, TypeScript will give us an error. 

## Type Shapes
A Type Shape describes what properties and methods it does or doesn't contain. The built in types in JS each have known properties and methods that always examples. 

For example, all strings have the .length property and a .toLowerCase() method.

When converting from Typescript to Javascript, the transpiler will let you know if we're accessing properties and methods that doesn't exist.

Therefore, one advantage of Typescript is the indirection that the transpiler provides.

## Any
there are some places where Typescript will not try to infer what type something is, generally when a variable is declared without being assigned an initial value. In situations where it can't deduce a type, it will consider that variable to be of the type __any__.

Variables of type __any__ can be assigned to any value and TypeScript won't give an error if they're reassigned to a different type later on.

For example:
```ts
let onOrOff;

onOrOff = 1;
onOrOff = false;
```

The variable onOrOff is declared without an initial value. This means it has the type any. Note that we can also give a type and not give it any value or a value and not any type. In the former case, if we use it without giving it a value, it will give us a compile time error, while the latter has no error as it is deduced by the transpiler.


## Variable Type Annotations
In some situations, we want to declare a variable without an initial value while still ensuring that it will only be assigned values of a certain type. In these cases, we can't use any as TypeScript won't throw errors for us.

We can instead tell TypeScript what type something is or should be using a __type annotation__.

Variables have type annotations which are also known as type declarations. We provide a type annotation by appending a variable with a colon and the type.

```ts
let mustBeAString : string;
mustBeAString = 'Catdog';

mustBeAString = 1337;
// Errors: Type 'number' is not assignable to type 'string'.
```

## Review
- TypeScript is a superset of JavaScript that adds types
- The type system refers to TypeSCript's understanding of how your code is meant to function: mainly what data types should be stored under our variables
- TypeScript expects the data type of the variable to match the type of the value initially assigned to it at its declaration - this is known as __type inference__.
- An object's shape describes what properties and methods it does or doesn't contain. TypeScript knows not only what type something is but also what shape that type has.
- WHen it isn't able to infer a type, TypeScript will consider a variable to be of type __any__.
- __Type annotations__ are little pieces of code that indicate what type a variable is meant to be.