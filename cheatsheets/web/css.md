#### CSS CheatSheet

- Selectors strength : # > . > tag

- StyleSheet strength : inside tag > internal css > external css

- Always order tags in alphbetical for easier debugging

###### Psedu Class :

```css
tag:hover {...} /* style applyed on hover */ 
```

- Total size = size + padding + Border + margin

###### Display :

```css
display: block ; /* take whole line defaulte in h , p , .. */
display: inline ; /* cant width */
display: inline-block ; /* can set width */  <span> <img> <a>
display: none ; /* don't Show */
visability: hidden ; /* exists but hidden */
```

###### Positioning :

```css
position: static ; /* default cant set coordinates */
position: relative ; /* relative to its static position */
position: absolute ; /* relative to its parent (nearest relative) */
position: fixed ; /* stick even with scrolling */
/********* centering elements ********/
text-align: center ;
margin: auto ;
/************ Wrapping **************/
float: right ; /* Use only if nessesary */
clear: right ; /* clears any floating on its right */
```

###### Dynamic Size :

```css
font-size: 100% ; /* Inharits through parents */
font-size: 1em ;  /* Inharits through parents */
font-size: 1rem ; /* Doesnt Inharit through parents */
```

###### z-index :

1. Default ( Code lines order )   Back : Front  =  First : Last

2. Nesting   Back : Front  =  Out : Inside

3. z-index <mark> Cant Work in static position </mark> 

```css
z-index : -1 ; /* Back */
z-index : 0 ; /* Default of all Elements */
z-index : 1 ; /* Front */
```

###### Media Queries :

```css
@media <type> <feature> {  css code  }
@media (min-width : 900px) and (max-width : 1000px) {...} /* Defined view port */
```

###### Selectors :

- Last property at same level will be overlaoded .

- Avoid inline css .

- Use Classes . 

```css
h1,h2,h3,h4,h5,h6 {....} /* Multiple Selectors */
#myHeader img {....} /* Hirarical Selector */
.firstclass.secondclass {....} /* Specific Selector */
```

------------

#### BootStrap :

- installed through CDN : content delivery Network

- Design phases : Inspiration -> Wireframe -> Mock up -> prototype

- Use also custom Classes

###### Layout :

```html
<div class="row" >
    <div class="col-md-6" >....</div> <!-- 2 per width for tablets and bigger  -->
</div>
<div class="container-fluid">...</div> <!-- adabtive change max width --> 
<!-- ****************** Carousael ************** -->
<div id= "itsid" class ="carousel slide" data-bs-ride="carousel" >
    <div class="carousal-item active" > ... </div>
    <button type="button" data-bs-target ="#itsid" data-bs-slide="next">...</button>
</div>
```
