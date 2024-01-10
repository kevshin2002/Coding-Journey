import products from './products'

let productName : string = products[0].name;
let shipping: number, taxPercent: number, taxTotal: number, total: number;
let address : string = '575 Broadway, New York City, New York';

const theProducts = products.filter((products) => { return products.name === productName;});
theProducts.forEach((theProduct) => {
    let isPreOrder = theProduct.preOrder === "true" ? true : false;
    let thePrice = Number(theProduct.price);

    shipping = thePrice >= 25 ? 0 : 5;
    taxPercent = address.match('New York') ? 0.1 : 0.05;
    
    taxTotal = thePrice * taxPercent;
    total = thePrice + taxTotal + shipping;
    
    console.log(`Product Name:${theProduct.name}\nShipping Address: ${address}\nProduct Price: ${thePrice}\nTax Total: ${taxTotal}\nShipping: ${shipping}\nTotal Price: ${total}\n`);

    if(isPreOrder)
        console.log("We will notify you when your order is ready!");    
});

