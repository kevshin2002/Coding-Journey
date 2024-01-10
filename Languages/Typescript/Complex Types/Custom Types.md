# Custom Types
- [Introduction](#introduction\)
- []()
- []()
- []()
- []()
- []()
- []()

## Introduction
Typescript can also be used to create custom types, rather than limiting it to predefined primitive types. We already have created a custom type which was the tuple type [string, string, number, boolean]. 

Complex types can be used the same way as primitive types:
```ts
let myVar : compType;

function testFn(param : compType) : returnedCompType {

}

let inferredTypeVariable = testFn(myVar);
```

## Enums
Our first example of a complex type is one of the most useful which are enums. We can use enums when we need to enumerate all the other possible values that a variable could have.
```ts
enum Direction {
    North,
    South,
    East,
    West
}
```

Enums are particularly useful when getting rid of magic numbers.

We use them such:
```ts
let whichWayToArcticOcean : Direction;
whichWayToArcticOcean = Direction.North; // No Type error
whichWayToArcticOcean = Direction.Southeast; // Type error;
whichWayToArcticOcean = West; // Wrong syntax, must use Direction.West
```

Under the hood, they get assigned to numbers, starting with 0 and then 1 onwards. If we process these in conditional statements, the first enum is 0 and then 1 respectively.

We can also change the starting number such as:
```ts
enum Direction {
    North = 7,
    South,
    East,
    West
}
```

We can also set values for them:
```ts
enum Direction {
    North = 8,
    South = 2,
    East = 6,
    West = 4
}
```