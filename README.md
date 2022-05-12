QUE ES DOUBLY LINKED LISTS
--------------------------

Las doubly linked lists tienen 2 punteros: primero y ultimo, esto es obligatorio. Gracias a esto podemos recorrer esta
lista por cualquiera de los dos extremos. Generalmente se reconoce a una doubly linked lists por su struct, pero existe
la posibilidad de que no tengan una struct, pueden estar los dos punteros "sueltos".
A su vez los nodos de la doubly linked lists se diferencian de los de una linked lists, en que ademas de tener un
puntero al siguiente nodo, tambien tiene un puntero al nodo anterior. Esto nos permite que al estar parados en cualquier
nodo de la lista puedo facilmente moverme hacia un lado a hacia otro. En el caso del primer nodo el puntero al nodo
anterior, apunta a NULL, porque no existe otro nodo antes que el primero. Lo mismo pasa con el ultimo nodo, al querer 
movernos al nodo siguiente nos apuntaria a NULL, ya que es el ultimo.

CUANDO USAR DOUBLY LINKED LISTS:
-------------------------------
Es conveniente usar cuando se necesita recorrer la lista en ambos sentidos, o cuando se quiera el elemento anterior
a uno dado, es decir si estoy en un nodo y no solo quiero ir al nodo siguiente, si no que tambien necesito ir al nodo
anterior. En otras palabras en el caso de querer el nodo anterior se usa para no tener que recorrer la lista desde el 
comienzo.
