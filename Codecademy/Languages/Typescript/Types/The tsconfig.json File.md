# The tsconfig.json File
TypeScript features are nice as it adds one layer of abstraction, the transpiler, to check for syntax and runtime errors. Sometimes though, we want extra flexibility, which is why the tsconfig.json exists.

The tsconfig.json tells the transpiler what files to run and many other configurations.

## Breakdown of tsconfig.json
The tsconfig.json file is always placed in the root of our project and can customize what rules we want the TypeScript compiler to enforce.

```json
{
  "compilerOptions": {
    "target": "es2017",
    "module": "commonjs",
    "strictNullChecks": true
  },
  "include": ["**/*.ts"]
}
```

In the JSON, there are several properties:
- "compilerOptions" : a nested object that contains the rules for the TypeScript compiler to enforce.
- - "target" : the value "es2017" means the project will be using the 2017 version of EcmaScript standards for JavaScript.
- - "module" : this project will be using "commonjs" syntax to import and export modules.
- - "strictNullChecks" : variables can only have null or undefined values if they are explicitly assigned those values.
- "include" : determines what files the compiler applies the rules to. In this case, "["**/*.ts"]" means the compiler should check every single file that has a .ts extension.

These are the default rules and we can tweak them to fit our own preferences.

# Usage
By adding tsconfig.json to our root directory, we can now use the command tsc without any arguments in our terminal. The compiler will automatically recogniez from our tsconfig.json what specific files to run. We can also still provide specific files to compile specific files.

```bash
tsc fileName.ts
```

[Compiler Option Documentation](https://www.typescriptlang.org/docs/handbook/compiler-options.html)