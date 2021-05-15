
// THIS FUNCTION WILL PRINT EVERYTHING

var everything = "";
var root = document.getElementById("root");

function printTitle(value)
{
    everything = everything + ("<br>" + "<h1>" + value + "</h1>" + "<hr>");
    root.innerHTML = everything;

};

function print(value) {
    everything = everything + ("<br>" + value);
    root.innerHTML = everything;

};


var title = ("Variable Types in JavaScript:");
var name = "john";
var age = 19;
var married = false;
var profession = undefined;

// HERE WE ARE SAYING WHAT TO PRINT

printTitle(title)
print(name + " type = " + typeof name);
print(age + " type = " + typeof age);
print(married + " type = " + typeof married);
print(profession + " type = " + typeof profession);

title = "Objects";
printTitle(title);

var person = {
    name: "gabriel",
    age: 19,
    hasDriversLicense: false,
    dateOfBirth: "10/01/2002",
    address: {
        firstLine: "123",
        postCode: "SE1",
        country: "Brazil"

    }

};

print("")
print(Object.values(person))


printTitle("Arrays")

var values = ["Rightfull", "Honest", "Sincere"];

print(values[1]);
print(values.length)

for (var n of values)
{
    print(n)
}

values.forEach(function(n, index) {
    print((index + 1) + " - " + n);
});

printTitle("Arithemetic Operators")

var addition = 3 + 2;
var subtraction = 3 - 70;
var division = 10 / 2;
var multiplication = 3 * 10;
var interger = 3 % 2;

print(addition);
print(subtraction);
print(division);
print(multiplication);
print(interger);

printTitle("Functions");

function subtraction() {
    var sub = 3 - 1;
};

print(subtraction());

function soma(a, b) {

    return (a + b)
};

var result = soma(1, 2);

print(result);  


printTitle("More js");


var person = {
    name: "gabriel",
    age: 19,
    hasDriversLicense: false,
    dateOfBirth: "10/01/2002"

};

// print(Object.keys(person));