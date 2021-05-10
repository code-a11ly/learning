
// THIS FUNCTION WILL PRINT EVERYTHING

var everything = "";
function print(value)
{
    var root = document.getElementById("root");
    everything = everything + ("<br>" + value);

    root.innerHTML = everything;

};


var title = ("Variable Types in JavaScript:");

var name = "john";
var age = 19;
var married = false;
var profession = undefined;

// HERE WE ARE SAYING WHAT TO PRINT

print("<h3>" + title + "</h3>");
print(name + " type = " + typeof name);
print(age + " type = " + typeof age);
print(married + " type = " + typeof married);
print(profession + " type = " + typeof profession);

