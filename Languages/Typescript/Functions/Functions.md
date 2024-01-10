# Functions
- [Introduction](#introduction)
- [Parameter Type Annotations](#parameter-type-annotations)
- [Optional Parameters](#optional-parameters)
- [Default Parameters](#default-parameters)
- [Inferring Return Types](#inferring-return-types)
- [Explicit Return Types](#explicit-return-types)
- [Void Return Type](#void-return-type)
- [Documenting Functions](#documenting-functions)

## Introduction
In Javascript, we can invoke arguments without restriction to types, which causes undefined behavior. To avoid this, they found techniques such as conditional if statements.

## Parameter Type Annotations
In TypeScript, function parameters may be given type annotations with the same syntax as variable declaration: a colon next to the name. The type annotation ensures that the parameters are of the correct type:

```ts
function greet(name: string) {
    console.log(`Hello, ${name}!`);
}

greet('Katz'); // Prints: Hello, Katz
greet(1337); // Error: argument '1337' is not assignable to parameter of type 'string'
```

By placing the type after the parameter, we're declaring that name is of type string and any invocation of greet() should pass a value of type string or an error will be thrown. This follows the same syntax styling as Python.

If parameters do not provide any type annotation, they're assumed to be of type any.

```ts
function printKeyValue(key: string, value) {
    console.log(`${key}: ${value}`);
}

printKeyValue(`Courage`, 1337); // Prints: Courage: 1337 
printKeyValue('Mood', 'scared');  // Prints: Mood: scared 
```

## Optional Parameters
TypeSCript normally gives an error if we don't provide a value for all arguments in a function. This isn't always desirable as we'd like to skip providing values.
```ts
function greet(name: string){
    console.log(`Hello, ${name || 'Anonymous'}!`);
}

greet('Anders'); // Prints: Hello, Anders!
greet(); // TypeSCript Error : Expected 1 argument, but got 0.
```

If we compile this in Javascript, it works as name is undefined which evaluates the condition to Anonymous. Therefore, we want to prevent TypeScript from throwing errors.

To indicate that a parameter is intentionally optional, we add a __?__ after its name. This tells TypeScript that the parameter is allowed to be undefined and doesn't always have to be provided.

```ts
function greet(name?: string) {
    console.log(`Hello, ${name || 'Anonymous'}`);
}

greet(); // Prints: Hello, Anonymous!
```

## Default Parameters
If a parameter is assigned a default value, TypeScript will infer the variable type to be the same as the default value's type.

```ts
function greet(name = 'Anonymous'){
    console.log(`Hello, ${name}!`);
}
```

The function can receive a string or undefined as its name parameter but any other argument is considered a type error.

This is a much cleaner way or writing code as it provides a default value. This is the same principle in C++ with default constructors providing a value to member classes. It is probably a good practice to provide default values for all arguments in the function.

## Inferring Return Types
TypeSCript can also infer the types of values returned by functions. It does this by looking at the types of the values after a function's return statement.

```ts
function createGreeting(name : string) {
    return `Hello, ${name}!`;
}

const myGreeting = createGreeting('Aisle Nevertell');
```

It infers myGreeting to be of type string via:
- createGreeting() return statement is followed by a string variable, so it's inferred to return a string.
- createGreeting('Aisle Nevertell') therefore must result in a value of type string.
- myGreeting is initialized to createGreeting('Aisle Nevertell'), which is a value with the type string.

Easiest way to understand is that the function is returning a string. 

```ts
function ouncesToCups(ounces: number){
    return `${ounces / 16} cups`;
}

const liquidAmount: number = ouncesToCups(3);
// Type 'string' is not assignable to type 'number'.
// Can fix by removing the template literal quotes.
```

## Explicit Return Types
If we'd like to be explicit about what type a function returns, we can add an explicit type annotation after its closing parenthesis.
It is the same syntax as other type annotations, a colon followed by the type. TypeScript will produce an error for any retur nstatement in that function that doesn't return the right type of value.

```ts
function createGreeting(name?: string) : string {
    if(name){
        return `Hello, ${name}!`;
    }

    return undefined;
    // Typescript Error: Type 'undefined' is not assignable to type 'string'.
};
```

We can also do it for arrow functions. An Arrow function is basically a lambda.

```ts
const createArrowGreeting = (name?: string): string => {
  if (name) {
    return `Hello, ${name}!`;
  }

  return undefined;
  // Typescript Error: Type 'undefined' is not assignable to type 'string'.
};
```

## Void Return Type
Type annotations are thus useful because it adds a level of abstraction and gives us COMPILE TIME errors, which helps build safer code. Always prefer compile time over run time if possible.

As such, we always have a type annotation even if there is no return value.
```ts
function logGreeting(name: string) {
    console.log(`Hello, ${name}!`);
}

function logGreeting(name: string) : void {
    console.log(`Hello, ${name}!`);
}
```

## Documenting Functions
TypeScript recognizes JS comment syntax:
```ts
// This is a single line comment
/*
This
is
a
multiline
comment
*/
```

There is a third comment style, which are documentation comments. A documentation comment is denoted with the first line /** and ends with */.

```ts
/**
 * This is a documentation comment
 * 
 * 
 * */
```

We can also use special tags within the comments to highlight certain aspects of the function. We can use @param to describe each function's parameter and @returns to describe what the function returns.

```ts
  /**
   * Returns the sum of two numbers.
   *
   * @param x - The first input number
   * @param y - The second input number
   * @returns The sum of `x` and `y`
   *
   */
  function getSum(x: number, y: number): number {
    return x + y;
  }
```

## Review
- Give type annotations to function parameters
- Deal with type annotations for optional parameters, which may have default values.
- Understand how TypeScript determines the return type of a function
- Explicitly specify return types for functions, including for functions that don't return anything.
- Use the above skills to diagnose and fix bugs in our code through the transpiler compile time error checking.

