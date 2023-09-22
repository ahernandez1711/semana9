# semana9

## **Idea de implementación de Casa de LEGO**

Se crearon dos clases nuevas: una llamada LEGO y la otra llamada PartsCasa. La primera tiene atributos para cada bloque de LEGO, mientras que la clase de partes de casa tiene atributos para lo solicitable para construir con los LEGOS (Para los puntos a y b del enunciado).

Se añadió la librería vector para la implementación de una pila con los métodos *push_back* y *pop_back*.

Primero se debe tener una lista con los componentes de lego que cada parte de la casa necesita. Luego, al tener una lista con todas las partes de casas que se quieren construir, estos nombres solicitadas se acomodan en una pila para estar en un orden adecuado para iniciar la contrucción. En este orden lo que se desea construir primero va a estar encima de la pila y lo que se quiere construir de último va a estar en lo más bajo de la pila. 

De la pila se toma el primer elemento y se consulta en la lista de componentes de lego para la casa cuáles bloques se necesitan. Se coloca el nombre del componente de la casa que se quiere construir y los legos necesarios para esto en una cola y cuando se vacíe la pila ya se va a tener la cola con todos los componentes para la construcción.



