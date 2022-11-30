<html>
<body>
<h1>LINKED LISTS</h1>
<h3>"linked lists are a collection of self-referenced structures called nodes".</h3>
<hr>

<p>Linked lists in C are data structures that link elements by means of a pointer. They are similar to arrays except that the access to a data is not done through an index. They also have a dynamic structure, that is, we do not need to know in advance the number of elements they will contain.</p>

<h2>¿What are the basic points?</h2>

<p>In linked lists, except for the last piece of data, all elements point to the next one. Therefore, each element consists of two components: the stored data and a link to the next element.</p>

<img src= "https://4.bp.blogspot.com/-EDYnoM-EiUQ/WNk3TpX5D4I/AAAAAAAAFNo/m14erky0bpMIpj7cgq5AFdKC89QNDk43QCLcB/s1600/01%2BListasSimplementeEnlazadas.jpg" width="400" height="300"/>
<hr>
<p>While in an array the elements are contiguous in memory, in a list the elements are scattered and in memory the representation is random depending on the space allocated.

The pointer following the last element must point to NULL (the end of the list).</p>

<h2>¿How to build the model of a list element?</h2>
<p>To set up a list item the struct type will be used. The list element will have a data field and a next pointer.
The next pointer has to be of the same type as the element. Otherwise, it will not be able to point to the element. The next pointer will allow access to the next element.</p>

<img src= "https://www.codegrepper.com/codeimages/how-to-print-the-elements-of-a-linked-list-in-c.png" width="300" height="300"/>

<p>The operator (->) function provides us with a simpler way to write the access to an attribute through a pointer. In the above function we access the start attribute through the list pointer. </p>
