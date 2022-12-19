#### JavaScript CheatSheet

```html
<a onload="alert('Hello')" > .... <!-- inline javaScript -->
<script src="index.js" charset="utf-8" type="text/javascript"></script>
```

###### console :

```javascript
$0 ; // currently inspected chrome
```

###### Printing on screen :

```javascript
alert("pop up window Message");
prompt("Ask For input") ;
console.log("print on console");
```

###### Basics :

```javascript
var varName ; // create variable container can use $ _ only
typeOf(varName) ; // returns variable type

a % b ; // reminder of a / b
c = 3 + 2 * 7 ; // follow normal presedence rules
b = a++ ; // b = a then increment a by 1
Math.floor(a) ; // approximate to lower int
Math.round(a) ; 
Math.pow(a,2);

if(a === b){} // Don't Matter Type !==
```

###### Arrays :

```javascript
guestList = [] ; // act like a vector
guestList.length ; // returns size of array
guestList.push("New Guest");
guestList.pop() ; // removes last element
guestList.includes("A Guest Name") // Search & returns true or False
```

###### Strings :

```javascript
myString1 + myString2 // string concatination
myString1.length ; // return string length
myString1.slice(start_index , stop_index_not_included) // stop - start = length
myString1.toUppercase() ;  myString1.toLowerCase() ;
```

###### Funcions :

```javascript
function funcName(parmeter) {...} // when passing it called argument(real values)
function funcName() {...   return a ; } // return Ketyword to output
```

###### DOM ;

```javascript
document,firstElementChild.lastElementChild ; // html -> body
document.getElementsByTagName("h1") ; // Array of all h1
document.getElementsByClassName("container")[0].innerHTML = "HI" ; // first
document.getElementById("myHeader").textContent = "Bye" ;

document.querySelector("#id1").style.color = "red" ;
document.querySelectorAll(".className")[1].classList.toggle("tempClass");

document.querySelector("a").setAttribute("href","www.hello.com");
```
