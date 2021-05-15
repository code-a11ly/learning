// ARRAY TYPES IN JAVASCRIPT

/*
    well variables are awesome but they can only
    store one value at time, and if you change
    that value the previous value is lost, so that
    is where arrays come in, using an array you can
    store lots of related values

*/

// following there is an exaple of one array
var values = ["Rightfull", "Honest", "Sincere"];

// to read an array content you can use a simple
// for loop
for (var n of values)
{
    console.log(n)
}

// or use the forEach 
values.forEach(function(n, index) {
    console.log((index) + " - " + n);
});

// NOTE: the index of an array is the position of
// a value in an array, and it starts counting on
// the 0 (zero) after 1, 2, 3 and so on

// EXAMPLE:
// var values = ["Rightfull", "Honest", "Sincere"];
//                    0           1         2 