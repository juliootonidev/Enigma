# Enigma
1º Trabalho Prático – Enigma1

  Dada uma configuração inicial, a máquina de criptografia alemã Enigma, da Segunda Guerra Mundial, substituía cada letra digitada no teclado por alguma outra letra. A substituição era bastante complexa, mas a máquina tinha uma vulnerabilidade: uma letra nunca seria substituída por ela mesma! Essa vulnerabilidade foi explorada por Alan Turing, que trabalhou na criptoanálise da Enigma durante a guerra. O objetivo era encontrar a configuração inicial da máquina usando a suposição de que a mensagem continha uma certa expressão usual da comunicação, como por exemplo a palavra ARMADA. Essas expressões eram chamadas de cribs. Se a mensagem cifrada era, por exemplo, FDMLCRDMRALF, o trabalho de testar as possíveis configurações da máquina era simplificado porque a palavra ARMADA, se estivesse nessa mensagem cifrada, só poderia estar em duas posições, ilustradas na tabela abaixo com uma seta. As demais cinco posições não poderiam corresponder ao crib ARMADA porque ao menos uma letra do crib, sublinhada na tabela abaixo, casa com sua correspondente na mensagem cifrada; como a Enigma nunca substituiria uma letra por ela própria, essas cinco posições poderiam ser descartadas nos testes.

![image](https://user-images.githubusercontent.com/69825958/135639361-11f3b436-35d3-49b4-b894-2db2503f23b3.png)

Neste problema, dada uma mensagem cifrada e um crib, seu programa em C deve computar o número de posições possíveis para o crib na mensagem cifrada.
