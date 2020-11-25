# suportePanTilt
**Suporte para câmera** feito com dois servo motores controlados por um controle remoto infravermelho usando Arduino.

![](https://github.com/fabioTowers/suportePanTilt/blob/main/teste_suporte_pt.gif)

Uma **webcam com os movimentos pan e tilt (ou panorâmico e vertical) já vi no mercado por mais de R$ 5.000,00** ([como podemos ver aqui](https://www.timix.com.br/logitech/960-001184.html?gclid=EAIaIQobChMIk6uBhPud7QIVCgWRCh1cbwDIEAQYASABEgLHzvD_BwE)). Mas para a maioria das reuniões uma webcam mais básica dá conta do recado, entretanto, sem a praticidade de ter os movimentos motorizados.

Minha solução para esse problema é montar um **suporte motorizado para webcam's** utilizando a placa microcontrolada Arduino. Veja abaixo o circuito do protótipo:

![](https://github.com/fabioTowers/suportePanTilt/blob/main/Stunning%20Amur-Wluff.png)

Utilizei um controle de projetor para controlar os servo motores, então se quiser utilizar esse projeto com outro controle é necessário mudar os códigos hexadecimais das teclas.

Os servo motores utilizados utilizados para testes são da marca TowerPro modelo SG90, mas eles são bem frágeis, para o projeto final é provável que utilize outro motor.

Utilizei também um suporte de plástico pronto, mas esclaresso que a qualidade do tipo de suporte que utilizei no teste é muito baixa, e ao contrário do que se imagina ao comprar um suporte pronto, nesse caso é necessário fazer diversos ajustes para as peças se encaixarem, retirar rebarbas de plástico e etc. Pra mim foi útil apenas para testes.

É muito importante também que os servo motores sejam alimentados por outra fonte para que o circuito funcione adequadamente, a fonte precisa ser de 5V, ou de acordo com a tensão do motor utilizado.

Para usar o receptor infravermelho utilizei a biblioteca [IRLibAll.h](https://github.com/cyborg5/IRLib2)

Verifique a pinagem do receptor de infravermelho utilizado se for reproduzir esse projeto.

Se gostou desse projeto não deixe de conhecer outros projetos me seguindo nas redes sociais:

[**Veja meu perfil no Medium**](https://medium.com/@fabiomendes_95615)

[**Veja meu perfil no LinkedIn**](https://www.linkedin.com/in/fabio-mendes-35743b128)
