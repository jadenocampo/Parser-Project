This C++ Project is a Lexical Analyzer and Recursive Descent Parser. The Analyzer is based on the following EBNF grammar: 

<program> 	-> 	<keyword> <ident> () { <declares> <stmts>}
<declares>	->     	<keyword> <ident> ;
		|      	<keyword> <ident> ; <declares>
<stmts>	->     	<assign> ; <forloop>
		|	<assign> ; 
<assign>	-> 	<ident> = constant;
		|	<ident> < constant;
		| 	<ident> ++
<forloop>	-> 	keyword> (<assign><assign><assign>) <expr>;
<expr>		->	<ident> = <ident> <op> constant;
<keyword>	->     	int
<ident> 	-> 	a <ident>| b<ident> … | z <ident> |  e
<constant	-> 0 | 1……|  e
<op> 		-> +


