Podés presentarlo así, con información ampliada y fuentes al final:


---

Módulo controlador de motores L298N

El L298N es un módulo controlador de motores ampliamente utilizado en proyectos de robótica, automatización y electrónica con plataformas como Arduino, ESP32 y Raspberry Pi. Su función principal es controlar el sentido de giro y la velocidad de motores de corriente continua (DC) y motores paso a paso mediante un circuito de doble puente H.

Características principales

Chip principal: L298N (generalmente ubicado debajo del disipador de calor).

Tipo de controlador: Doble puente H (Dual H-Bridge), lo que permite controlar dos motores DC de manera independiente o un motor paso a paso bipolar.

Voltaje de alimentación para motores: Entre 5 V y 35 V.

Voltaje lógico: 5 V.

Corriente máxima: Hasta 2 A por canal (con buena disipación térmica; la corriente continua recomendada suele ser menor para evitar sobrecalentamiento).

Control de velocidad: Compatible con señales PWM (Pulse Width Modulation).

Protección térmica: El circuito integrado incorpora protección contra sobretemperatura.


Conexiones principales

Alimentación

El bloque de terminales de tres pines permite conectar la alimentación del módulo:

VCC o +12V: Alimentación de los motores.

GND: Tierra común.

5V: Salida del regulador interno cuando el jumper de 5 V está colocado (o entrada de alimentación lógica, según la configuración del módulo).


Salidas para motores

Los dos bloques de dos terminales corresponden a:

Motor A (OUT1 y OUT2).

Motor B (OUT3 y OUT4).


En ellos se conectan directamente los motores.

Pines de control

Los pines de entrada reciben las señales provenientes del microcontrolador:

IN1 e IN2: Controlan el sentido de giro del Motor A.

IN3 e IN4: Controlan el sentido de giro del Motor B.


Pines de habilitación

ENA: Habilita el Motor A y permite controlar su velocidad mediante PWM.

ENB: Habilita el Motor B y permite controlar su velocidad mediante PWM.

La velocidad de giro de los motores A y B se controla mediante los pines ENA y ENB, aplicando una señal PWM (Pulse Width Modulation) desde el microcontrolador (por ejemplo, Arduino).

El PWM no modifica el voltaje de alimentación del motor, sino que varía el ciclo de trabajo (duty cycle) de la señal. Cuanto mayor es el ciclo de trabajo, mayor es la potencia promedio entregada al motor y, por lo tanto, mayor será su velocidad de giro.

Por ejemplo, en un Arduino:
PWM = 0 (0 %): motor detenido.
PWM = 128 (≈50 %): aproximadamente la mitad de la potencia y una velocidad intermedia.
PWM = 255 (100 %): máxima potencia aplicada y velocidad máxima disponible.

Cada motor puede controlarse de forma independiente:
ENA: regula la velocidad del Motor A.
ENB: regula la velocidad del Motor B.

Los pines IN1, IN2, IN3 e IN4 no controlan la velocidad; únicamente determinan el sentido de giro (adelante o atrás).

Fuente:
STMicroelectronics, L298 Dual Full-Bridge Driver – Datasheet.
Arduino, documentación oficial sobre PWM y control de motores.

Funcionamiento

El módulo utiliza un circuito de doble puente H, que permite invertir la polaridad aplicada a los motores. Gracias a ello es posible hacer que giren en ambos sentidos. Además, aplicando una señal PWM sobre los pines ENA y ENB se puede regular la velocidad de giro.

Aplicaciones

El controlador L298N se utiliza frecuentemente en:

Robots móviles.

Vehículos controlados por Arduino.

Brazos robóticos.

Sistemas automatizados.

Proyectos educativos de electrónica.

Control de motores paso a paso bipolares

*Fuentes utilizadas*
1. STMicroelectronics. L298 Dual Full-Bridge Driver – Datasheet.
https://www.st.com/resource/en/datasheet/l298.pdf


2. Arduino Documentation. Documentación oficial sobre PWM y control de motores.
https://docs.arduino.cc/


3. SparkFun Electronics. Tutoriales y documentación sobre controladores de motores y puentes H.
https://learn.sparkfun.com/


4. Pololu Robotics and Electronics. Información técnica sobre control de motores y puentes H.
https://www.pololu.com/


Una pila AA (también llamada UM3 o UM-4x3) pesa entre 23 g y 26 g si es alcalina. Esto significa que un paquete o soporte de 4 pilas juntas pesará aproximadamente entre 92 g y 104 g, sin contar el peso del estuche.


Peso
El peso varía ligeramente según el fabricante del módulo, pero los valores reportados son:
27 g (manual del módulo Oumefar). �
Manuals+
30 g (hoja de datos de varios fabricantes). �
Loging Electronics +1
Por lo tanto, puede considerarse un peso aproximado de 30 g para un módulo L298N estándar.
Fuentes
STMicroelectronics. L298 Dual Full-Bridge Driver Datasheet. �
DigiKey
L298N Stepper DC Motor Driver – Datasheet del módulo. �
Loging Electronics
Oumefar L298N DC Motor Driver Module User Manual. �
Manuals+


Raspberry Pi Pico W: información general

La Raspberry Pi Pico W es una placa de desarrollo basada en el microcontrolador RP2040, diseñada para aplicaciones de electrónica, automatización e Internet de las Cosas (IoT). A diferencia de la Raspberry Pi Pico original, incorpora conectividad Wi-Fi de 2.4 GHz (802.11n) y Bluetooth 5.2 mediante el chip Infineon CYW43439. 

Características principales:

Microcontrolador RP2040 de doble núcleo Arm Cortex-M0+ a 133 MHz.

264 KB de memoria SRAM.

2 MB de memoria Flash integrada.

Conectividad Wi-Fi 2.4 GHz (802.11n) y Bluetooth 5.2.

26 pines GPIO multifunción (3 con entradas ADC).

Alimentación por USB Micro-B o fuente externa de 1.8 V a 5.5 V.

Compatible con MicroPython, C/C++ y otros lenguajes de programación. 


Peso

El peso aproximado de la Raspberry Pi Pico W es de 6 g, incluyendo la placa y los componentes montados. 

Fuentes

Raspberry Pi Foundation. Raspberry Pi Pico W Datasheet. 

Raspberry Pi Foundation. Raspberry Pi Pico W – Product Information Portal.


Tornillos de cabeza alomada

Los tornillos de cabeza alomada (también conocidos como pan head screws) son elementos de fijación con una cabeza redondeada de perfil bajo que proporciona una amplia superficie de apoyo. Se utilizan para unir piezas metálicas, plásticas o electrónicas, especialmente cuando se requiere una fijación segura sin que la cabeza sobresalga excesivamente. Son comunes en el montaje de placas de circuito impreso (PCB), gabinetes electrónicos y equipos de instrumentación. Se fabrican en materiales como acero galvanizado, acero inoxidable y latón. (Fastenal, Pan Head Machine Screws)

Peso aproximado:
El peso depende del material y de las dimensiones. Como referencia:

Tornillo M2.5 × 10 mm de acero: ≈0,8 g.

Tornillo M3 × 10 mm de acero: ≈1,1 g.



---

Espaciadores hexagonales de latón

Los espaciadores hexagonales de latón (brass hex standoffs) son componentes mecánicos utilizados para mantener una separación fija entre dos piezas, como placas electrónicas, paneles o estructuras. Su forma hexagonal permite apretarlos fácilmente con una llave, y suelen tener rosca interna, externa o una combinación de ambas. El latón ofrece buena resistencia a la corrosión, conductividad eléctrica y facilidad de mecanizado. (RS Components, Brass Hex Standoffs)

Peso aproximado:

Espaciador hexagonal de latón M2.5 × 10 mm (hembra-hembra): ≈1,5–2 g.

Espaciador hexagonal de latón M3 × 10 mm (hembra-hembra): ≈2–3 g.


Fuentes

1. Fastenal. Pan Head Machine Screws. https://www.fastenal.com/product/fasteners/screws/machine-screws/600001


2. RS Components. Brass Hex Standoffs. https://uk.rs-online.com/web/c/fixings-fasteners/mechanical-fixings/standoffs/


3. Essentra Components. Guide to PCB Standoffs and Spacers. https://www.essentracomponents.com/


Chassis (1 pieza)

El chassis (o chasis) es la estructura principal de un robot o vehículo, sobre la cual se montan todos los componentes, como la placa de control, motores, ruedas, baterías y sensores. Su función es proporcionar soporte mecánico, mantener la correcta posición de los componentes y dar estabilidad al sistema.

Los chasis para proyectos de robótica suelen fabricarse en acrílico, aluminio o plástico ABS, dependiendo del diseño y de la resistencia requerida.

Peso aproximado:

Chasis de acrílico para robot de dos ruedas: 100–150 g.

Chasis de aluminio del mismo tamaño: 150–250 g.


Si se trata del chasis incluido en un kit de robótica estándar (como los usados con Raspberry Pi Pico o Arduino), un valor típico es ≈120 g.

Función

Soportar y proteger los componentes del robot.

Proporcionar puntos de montaje para motores, ruedas, sensores y placas electrónicas.

Aportar rigidez y estabilidad durante el funcionamiento.


Fuentes

Pololu. Robot Chassis Kits: https://www.pololu.com/category/102/robot-chassis

DFRobot. Robot Chassis and Mechanical Kits: https://www.dfrobot.com/category-9.html


Motor DC con reducción (Deceleration DC Motor)

Un Deceleration DC Motor (también llamado motor DC con caja reductora o DC geared motor) es un motor de corriente continua equipado con un sistema de engranajes que reduce la velocidad de giro y aumenta el torque (fuerza de giro).

Función

Convertir energía eléctrica en movimiento rotatorio.

Reducir la velocidad de salida mediante una caja de engranajes.

Incrementar el torque para mover ruedas, mecanismos o cargas con mayor facilidad.

Se utiliza comúnmente en robots móviles, vehículos inteligentes y sistemas de automatización.


Características generales

Voltaje de operación: 3 V a 12 V (según el modelo).

Velocidad de salida: entre 30 y 300 RPM, dependiendo de la relación de reducción.

Mayor torque que un motor DC sin reductora.

Compatible con controladores de motores como el L298N.


Peso

El peso depende del modelo. Un motor con reductora tipo TT (el más común en kits de robótica) pesa aproximadamente:

25–30 g por motor.


Fuentes

Pololu. Micro Metal Gearmotors: https://www.pololu.com/category/60/micro-metal-gearmotors

DFRobot. TT DC Geared Motor: https://www.dfrobot.com/product-100.html


Hammer Caster (Rueda giratoria)

Un Hammer Caster es una rueda giratoria con soporte (caster wheel) utilizada para permitir el desplazamiento de equipos, carros o robots. A diferencia de una rueda motriz, no tiene motor propio; gira libremente y ayuda a mantener el equilibrio y la estabilidad del sistema.

Función

Servir como punto de apoyo móvil para un robot o estructura.

Permitir cambios de dirección con menor resistencia.

Mantener la estabilidad del chasis al desplazarse.

Reducir la carga sobre las ruedas motrices.


Características comunes

Fabricadas con rueda de plástico, goma o poliuretano.

Soporte metálico (frecuentemente acero).

Giro de 360° alrededor de un eje vertical.

Usadas en robots móviles, carros pequeños y equipos industriales.


Peso aproximado

Depende del tamaño y modelo:

Caster pequeño para robótica: 10–30 g.

Caster metálico industrial pequeño: 50–150 g.


Para un robot educativo de dos ruedas, un valor típico es aproximadamente 20 g por unidad.

Fuentes

[Hammer Caster Co., Ltd. (fabricante de ruedas industriales)](https://www.hammer-caster.co.jp/?utm_source=chatgpt.com)

Pololu. Ball Casters and Robot Chassis Components: https://www.pololu.com/category/115/ball-casters


Tornillo M3 × 30 (6 piezas)

Un M3 × 30 screw es un tornillo métrico con las siguientes características:

M3: diámetro nominal de la rosca de 3 mm.

30: longitud del tornillo de 30 mm (medida desde debajo de la cabeza hasta la punta).

6 bars: indica un conjunto de 6 tornillos.


Función

Sujetar piezas mecánicas o electrónicas.

Fijar placas, chasis, espaciadores y soportes en proyectos de robótica.

Trabajar junto con tuercas o espaciadores roscados (por ejemplo, separadores de latón).


Peso aproximado

El peso depende del material y del tipo de cabeza:

Tornillo M3 × 30 mm de acero: aproximadamente 1,8–2,5 g por unidad.

Juego de 6 tornillos: aproximadamente 11–15 g.


Fuentes

Bossard. Technical information – Metric screws and weights: https://www.bossard.com/

Fastenal. Metric Machine Screws: https://www.fastenal.com/product/fasteners/screws/machine-screws/600001


(El peso exacto puede variar según si son de acero inoxidable, acero galvanizado, aluminio o el tipo de cabeza: alomada, avellanada, Allen, etc.)


Fastener (Elemento de fijación)

Un fastener es un término general en inglés para cualquier elemento de fijación mecánica utilizado para unir o sujetar dos o más piezas. Incluye componentes como tornillos, tuercas, pernos, arandelas, remaches y espaciadores.

Función

Unir piezas de forma segura.

Permitir el montaje y desmontaje de estructuras o componentes.

Mantener alineadas piezas mecánicas o electrónicas.

Proporcionar resistencia estructural en equipos, máquinas y robots.


Ejemplos comunes en robótica y electrónica

Tornillos M2, M2.5, M3.

Tuercas hexagonales.

Arandelas.

Espaciadores de latón.

Pernos de montaje.


Peso aproximado

El peso depende del tipo y tamaño del fastener:

Tornillo pequeño M3: ≈1–3 g por unidad.

Tuerca M3: ≈0,3–0,5 g por unidad.

Arandela M3: ≈0,1–0,2 g por unidad.


Fuentes

Bossard. Fastening Technology Manual: https://www.bossard.com/

Fastenal. Fasteners Technical Information: https://www.fastenal.com/


Wheel (Rueda)

Una wheel (rueda) es un componente mecánico circular que permite el desplazamiento de un vehículo o robot al transformar el movimiento de giro de un motor en movimiento lineal.

Función

Permitir el movimiento del chasis o robot.

Transmitir la fuerza (torque) del motor hacia el suelo.

Proporcionar agarre y estabilidad durante el desplazamiento.

Reducir la fricción respecto al deslizamiento directo.


Características comunes en robótica

Materiales: goma, plástico, silicona o poliuretano.

Puede estar acoplada a un motor DC con reductora.

Su tamaño influye en la velocidad, fuerza de empuje y capacidad para superar obstáculos.


Peso aproximado

Depende del diámetro y material:

Rueda pequeña para robot educativo (60–70 mm): ≈15–30 g por unidad.

Ruedas de kits con motor TT: ≈20–25 g por unidad.


Fuentes

Pololu. Robot Wheels and Accessories: https://www.pololu.com/category/42/wheels

DFRobot. Robot Wheels: https://www.dfrobot.com/category-110.html


Velocimetry Cose Wheel (rueda de medición de velocidad / rueda codificadora)

El término "Velocimetry Cose Wheel" parece referirse a una rueda de odometría o rueda codificadora (encoder wheel), utilizada para medir la velocidad y el desplazamiento de un robot. En algunos kits puede aparecer escrito de forma incorrecta como "cose wheel" cuando se refiere a una code wheel (rueda de código).

Función

Medir la velocidad de giro de un eje o rueda.

Calcular la distancia recorrida por un robot.

Proporcionar información para sistemas de control de movimiento.

Trabajar junto con un sensor óptico o encoder para detectar pulsos generados por marcas en la rueda.


Funcionamiento básico

La rueda tiene marcas, ranuras o patrones que un sensor detecta mientras gira. La cantidad de pulsos permite calcular:

Velocidad de rotación.

Dirección del movimiento (con encoders adecuados).

Distancia recorrida.


Peso aproximado

Depende del tamaño y material:

Rueda codificadora pequeña de plástico: ≈2–10 g.

Rueda de odometría con soporte y encoder: ≈15–40 g.


Fuentes

[CUI Devices – Encoder Technology Overview](https://www.cuidevices.com/blog/understanding-rotary-encoders?utm_source=chatgpt.com)

[Pololu – Encoders and Motion Sensors](https://www.pololu.com/category/12/encoders?utm_source=chatgpt.com)


El cable bipolar paralelo es un cable eléctrico formado por dos conductores aislados colocados uno al lado del otro y unidos en paralelo (tipo “cinta”). Se usa normalmente para llevar alimentación eléctrica en instalaciones de baja tensión.

Características habituales:

Tiene dos hilos: uno para fase (+) y otro para neutro (o positivo y negativo en corriente continua).

Suele identificarse por colores (por ejemplo, marrón/azul en CA o rojo/negro en CC, según el uso).

Se utiliza en lámparas, parlantes, pequeños electrodomésticos, conexiones de baja potencia y extensiones (dependiendo de la sección y la normativa).

La capacidad de corriente depende de la sección del conductor (por ejemplo, 0,75 mm², 1 mm², 1,5 mm², etc.) y del tipo de instalación.


Si me decís para qué lo necesitás (luces, parlantes, 12 V, 220 V, exterior, etc.) puedo orientarte sobre el tipo y sección adecuada.


Sensor de proximidad
Un sensor de proximidad es un dispositivo que permite detectar la presencia o ausencia de un objeto cercano sin necesidad de contacto físico. Dependiendo de su tecnología, puede detectar objetos metálicos, no metálicos, personas, líquidos o incluso medir la distancia hasta un objeto. �
Omron +1
¿Cómo funciona?
El funcionamiento depende del tipo de sensor. En general, el sensor genera algún tipo de señal —por ejemplo, un campo electromagnético, luz o ultrasonido— y detecta las modificaciones producidas cuando un objeto se encuentra dentro de su zona de detección. Después, el circuito electrónico convierte esa detección en una señal de salida
¿Dónde se utilizan?
Los sensores de proximidad se emplean en:
Robótica: detección de obstáculos y objetos.
Automatización industrial: detección de piezas en líneas de producción.
Sistemas de seguridad: detección de personas u objetos.
Automóviles: asistencia para estacionamiento y detección de obstáculos.
Electrónica: detección de presencia o posición.
Control de nivel: especialmente mediante sensores capacitivos.
Teléfonos móviles: detección de la proximidad de la cara durante una llamada.
Una de sus principales ventajas es que, al no requerir contacto mecánico, pueden tener mayor durabilidad que los interruptores de contacto tradicionales. �
DigiKey
Ejemplo sencillo: sensor ultrasónico
Un sensor ultrasónico, como los utilizados en proyectos de robótica, emite una onda sonora de alta frecuencia hacia un objeto. La onda rebota y vuelve al sensor. Midiendo el tiempo de vuelo entre la emisión y la recepción del eco, el sistema puede calcular la distancia al objeto. �
Baumer
precio aproximado:7000-15000

Fuentes recomendadas
OMRON – Overview of Proximity Sensors⁠� — clasificación y funcionamiento de sensores industriales. �
Omron
DigiKey – Consideraciones sobre sensores de proximidad⁠� — explicación de diferentes tecnologías y criterios de selección. �
DigiKey
Baumer – Funcionamiento de sensores ultrasónicos⁠� — funcionamiento del sensor ultrasónico mediante tiempo de vuelo. �
Baumer
Ministerio de Educación de San Juan – Guía de Tecnología sobre sensores⁠� — material educativo en español sobre sensores de proximidad. �
Educación San Juan
DigiKey – Fundamentos de los sensores de proximidad⁠� — fundamentos de sensores inductivos y otras tecnologías.


El cartón piedra es un material rígido y resistente elaborado generalmente a partir de papel o cartón prensado y endurecido, que puede utilizarse para realizar maquetas, manualidades, máscaras, esculturas y trabajos escolares.
Características
Es liviano, pero bastante resistente.
Se puede cortar, pegar, lijar y pintar.
Permite realizar estructuras y formas tridimensionales.
Es relativamente económico y fácil de conseguir.
Puede fabricarse artesanalmente utilizando papel, cartón y adhesivos.


Conexion WiFi 
INVESTIGACIÓN 
Control inalámbrico de un autito robótico mediante Raspberry Pi Pico W 
 
Comunicación Wi-Fi, programación en C, PWM, L298N y aplicación Android 
 
 
Proyecto de Electrónica / Robótica 
Documento de investigación y propuesta de implementación 
 
 Introducción 
El presente trabajo analiza una posible implementación para controlar de forma inalámbrica un autito robótico mediante una Raspberry Pi Pico W. El objetivo es reemplazar el funcionamiento automático actual del robot por un sistema en el que un teléfono celular Android pueda enviar órdenes a través de una conexión Wi-Fi. La Raspberry Pi Pico W recibirá esas órdenes, las interpretará mediante un programa escrito en C y controlará dos motores de corriente continua utilizando señales PWM y un controlador L298N. 
La propuesta también contempla conservar el sensor ultrasónico HC-SR04 utilizado para detectar obstáculos. De esta manera, el control manual mediante el celular puede complementarse con una función de seguridad que detenga el robot cuando se detecte un objeto a una distancia determinada. 
Objetivo 
Diseñar un sistema de control remoto por Wi-Fi para un autito robótico basado en una Raspberry Pi Pico W, utilizando programación en C mediante el Pico SDK. El sistema deberá permitir que un dispositivo Android envíe órdenes de movimiento a la Pico W, que posteriormente las traduzca en señales de dirección y PWM para controlar los dos motores del vehículo. 
Componentes del sistema 
Componente 	Función 	Conexión / observación 
Raspberry Pi Pico W 	Microcontrolador y unidad de control. Además incorpora Wi-Fi. 	Programa en C mediante Pico SDK. 
L298N 	Controlador de potencia para los dos motores DC. 	Recibe IN1–IN4 y ENA/ENB. 
Motor A 	Movimiento de un lado del autito. 	IN1, IN2 y ENA. 
Motor B 	Movimiento del otro lado del autito. 	IN3, IN4 y ENB. 
HC-SR04 	Medición de distancia para detectar obstáculos. 	TRIG y ECHO; ECHO debe adaptarse a 3,3 V. 
Teléfono Android 	Interfaz de control remoto. 	Se comunica por Wi-Fi y puede utilizar una app/APK. 
Asignación de pines propuesta 
GPIO Pico W 	Señal 	Función 
GP2 	IN1 	Dirección Motor A 
GP3 	IN2 	Dirección Motor A 
GP4 	ENA 	PWM / velocidad Motor A 
GP6 	IN3 	Dirección Motor B 
GP7 	IN4 	Dirección Motor B 
GP8 	ENB 	PWM / velocidad Motor B 
GP14 	TRIG 	Disparo HC-SR04 
GP15 	ECHO 	Entrada HC-SR04, con 
		adaptación de nivel 
Funcionamiento general del sistema 
El sistema puede dividirse en cuatro niveles. En primer lugar, el teléfono Android funciona como control remoto. En segundo lugar, la comunicación Wi-Fi transporta las órdenes. En tercer lugar, la Raspberry Pi Pico W recibe y procesa dichas órdenes. Finalmente, el L298N y los motores convierten las señales eléctricas de la Pico en movimiento. 
CELULAR ANDROID 
       │ 
       │ Wi-Fi / HTTP 
       ▼ 
RASPBERRY PI PICO W 
       │ 
       ├── Programa en C 
       │     ├── Comunicación Wi-Fi 
       │     ├── Interpretación de comandos 
       │     └── Control de seguridad 
       │ 
       ├── GPIO + PWM 
       ▼ 
     L298N 
       │ 
       ├── Motor A 
       └── Motor B 
 
HC-SR04 ─────────────► Pico W 
   (distancia / obstáculos) 
¿Qué es el PWM y por qué se utiliza? 
PWM (Pulse Width Modulation o modulación por ancho de pulso) es una técnica que permite controlar la potencia promedio entregada a una carga mediante una señal digital que alterna rápidamente entre un nivel alto y uno bajo. En este proyecto se utiliza para regular la velocidad de los motores. 
En el código existente se utiliza un rango de 0 a 255. Un valor cercano a 0 representa una señal con muy poca potencia promedio, mientras que 255 representa el máximo establecido por el programa. El valor no debe interpretarse necesariamente como una velocidad exacta en centímetros por segundo, ya que la velocidad real depende también del motor, la alimentación, el peso y la superficie. 
Función del L298N 
El L298N es un controlador de motores que permite manejar dos motores DC. La Raspberry Pi Pico W no debe alimentar directamente los motores desde sus GPIO. En cambio, los GPIO proporcionan señales de control al L298N, mientras que el controlador utiliza una alimentación apropiada para los motores. 
Para cada motor se utilizan dos señales de dirección y una señal de habilitación. IN1/IN2 controlan el sentido del Motor A y ENA recibe el PWM. IN3/IN4 realizan la misma función para el Motor B y ENB recibe su PWM. 
Comunicación Wi-Fi 
La Raspberry Pi Pico W incorpora conectividad inalámbrica, por lo que no necesita un módulo Wi-Fi externo. Para la implementación en C se puede utilizar el soporte de Wi-Fi del Pico SDK junto con la pila de protocolos lwIP. 
Para simplificar la primera versión del proyecto se propone que la Pico W se conecte a una red Wi-Fi existente (modo estación) y ejecute un pequeño servidor HTTP. El celular se conecta a la misma red y envía solicitudes a la dirección IP de la Pico W. 
Ejemplo conceptual: 
 
Teléfono 
   │ 
   │  GET /adelante 
   ▼ 
Wi-Fi 
   │ 
   ▼ 
Pico W (servidor) 
   │ 
   ├── /adelante  → ambos motores hacia adelante 
   ├── /atras     → ambos motores hacia atrás 
   ├── /izquierda → giro 
   ├── /derecha   → giro 
   └── /stop      → detener 
Esta arquitectura tiene la ventaja de separar claramente la interfaz del celular del control físico del robot. El APK no se instala en la Pico W: el APK pertenece al teléfono. La Pico W ejecuta su propio firmware en C y recibe las órdenes por la red. 
Aplicación Android y APK 
Un APK es el formato de paquete utilizado para distribuir e instalar aplicaciones Android. En este proyecto, la aplicación funcionaría como un control remoto. Puede desarrollarse con una herramienta como MIT App Inventor, que permite diseñar la interfaz y establecer las acciones de los botones sin tener que desarrollar todo el sistema Android desde cero. 
La condición de utilizar C se mantiene en el firmware de la Raspberry Pi Pico W. Si la consigna específica del docente exige que también la aplicación Android esté programada en C/C++, debe confirmarse antes de elegir la herramienta para generar el APK. Para una primera versión, lo más importante es comprobar la comunicación entre celular y Pico W. 
Comandos propuestos 
Botón 	Ruta HTTP 	Acción 
↑ Adelante 	/adelante 	Ambos motores hacia adelante 
↓ Atrás 	/atras 	Ambos motores hacia atrás 
← Izquierda 	/izquierda 	Motor izquierdo reduce o invierte su movimiento 
→ Derecha 	/derecha 	Motor derecho reduce o invierte su movimiento 
 
■ Stop 	/stop 	Detener ambos motores 
Sensor ultrasónico HC-SR04 
El HC-SR04 mide distancia mediante ultrasonido. La Pico W genera un pulso en TRIG y mide el tiempo durante el cual ECHO permanece activo. A partir de ese tiempo se calcula la distancia aproximada. 
Es importante tener en cuenta que los GPIO de la Pico W trabajan con lógica de 3,3 V. Si el módulo HC-SR04 utilizado entrega aproximadamente 5 V en ECHO, esa señal no debe conectarse directamente al GPIO. Debe utilizarse una adaptación de nivel, por ejemplo un divisor resistivo correctamente calculado. También deben compartir una referencia de GND. 
Una vez integrado el control manual, el sensor puede actuar como sistema de seguridad. Por ejemplo, si el usuario ordena avanzar y la distancia medida es inferior al límite establecido, el programa puede detener los motores independientemente de la orden del celular. 
Integración con el código de motores existente 
El código proporcionado para el proyecto ya contiene las funciones fundamentales para controlar los motores: inicialización del PWM, establecimiento de velocidad, funciones motor_a() y motor_b(), y stop_all(). Por lo tanto, no es necesario reemplazar esa lógica. La modificación principal consiste en agregar la comunicación Wi-Fi y hacer que las funciones de movimiento se ejecuten según el comando recibido. 
Ejemplo de lógica de control: 
 if (comando == ADELANTE) {     motor_a(true, 200);     motor_b(true, 200); 
} else if (comando == ATRAS) {     motor_a(false, 200);     motor_b(false, 200); 
} else if (comando == STOP) {     stop_all(); 
} 
Código de referencia: Pico W + Wi-Fi + motores 
El siguiente código es una base de integración para un proyecto realizado con Pico SDK. Utiliza el modo estación para conectarse a una red Wi-Fi y un servidor TCP/HTTP sencillo. Se deben reemplazar WIFI_SSID y WIFI_PASSWORD por los datos de la red de prueba. También debe incorporarse el código del sensor HC-SR04 si se desea utilizarlo en la versión final. 
#include <stdio.h> 
#include <string.h> 
#include "pico/stdlib.h" 
#include "pico/cyw43_arch.h" #include "hardware/pwm.h" #include "lwip/tcp.h" 
 
// ---------------- PINES ---------------- 
#define IN1 2 
#define IN2 3 
#define ENA 4  
#define IN3 6 
#define IN4 7 
#define ENB 8 
 
// ---------------- WIFI ----------------- 
#define WIFI_SSID     "NOMBRE_DE_RED" 
#define WIFI_PASSWORD "CONTRASENA" 
 
// Velocidad PWM: 0 a 255 
#define VELOCIDAD 200 
 
// ------------- CONTROL PWM ------------- void pwm_init_pin(uint pin) {     gpio_set_function(pin, GPIO_FUNC_PWM); 
     uint slice = pwm_gpio_to_slice_num(pin);     pwm_set_wrap(slice, 255);     pwm_set_chan_level(slice,                        pwm_gpio_to_channel(pin), 0);     pwm_set_enabled(slice, true); 
}  void set_speed(uint pin, uint8_t speed) {     pwm_set_gpio_level(pin, speed); 
} 
 
// ------------- CONTROL MOTORES ---------- void motor_a(bool forward, uint8_t speed) {     gpio_put(IN1, forward);     gpio_put(IN2, !forward);     set_speed(ENA, speed); 
}  void motor_b(bool forward, uint8_t speed) {     gpio_put(IN3, forward);     gpio_put(IN4, !forward);     set_speed(ENB, speed); 
}  void stop_all(void) {     set_speed(ENA, 0);     set_speed(ENB, 0); 
} 
 
// ----------- PROCESAMIENTO HTTP --------- void ejecutar_comando(const char *request) { 
     if (strstr(request, "GET /adelante")) {         motor_a(true, VELOCIDAD);         motor_b(true, VELOCIDAD); 
    }     else if (strstr(request, "GET /atras")) {         motor_a(false, VELOCIDAD);         motor_b(false, VELOCIDAD); 
    }     else if (strstr(request, "GET /izquierda")) { 
        // Giro sobre el lugar.         motor_a(false, VELOCIDAD);         motor_b(true, VELOCIDAD); 
    }     else if (strstr(request, "GET /derecha")) { 
        // Giro sobre el lugar.         motor_a(true, VELOCIDAD);         motor_b(false, VELOCIDAD); 
    }     else if (strstr(request, "GET /stop")) {         stop_all(); 
    } 
} 
 
// ----------- SERVIDOR TCP --------------- static err_t tcp_recv_callback(void *arg,                                struct tcp_pcb *tpcb,                                struct pbuf *p,                                err_t err) { 
     if (!p) {         stop_all();         tcp_close(tpcb);         return ERR_OK; 
    }      char request[256]; 
    uint16_t len = p->tot_len; 
     if (len >= sizeof(request))         len = sizeof(request) - 1; 
     pbuf_copy_partial(p, request, len, 0);     request[len] = '\0'; 
     printf("Solicitud: %s\n", request); 
     ejecutar_comando(request); 
     const char *response = 
        "HTTP/1.1 200 OK\r\n" 
        "Content-Type: text/plain\r\n" 
        "Connection: close\r\n" 
        "\r\n" 
        "OK"; 
 
    tcp_write(tpcb, response, strlen(response),               TCP_WRITE_FLAG_COPY);     tcp_output(tpcb); 
 
    pbuf_free(p);     tcp_close(tpcb);      return ERR_OK; 
}  static err_t tcp_accept_callback(void *arg,                                  struct tcp_pcb *newpcb, 
                                 err_t err) { 
     tcp_recv(newpcb, tcp_recv_callback);     return ERR_OK; 
}  void iniciar_servidor(void) { 
     struct tcp_pcb *server = tcp_new(); 
     if (!server) {         printf("No se pudo crear el servidor\n");         return; 
    }      if (tcp_bind(server, IP_ADDR_ANY, 80) != ERR_OK) {         printf("No se pudo abrir el puerto 80\n");         tcp_close(server);         return; 
    }      server = tcp_listen(server);     tcp_accept(server, tcp_accept_callback); 
     printf("Servidor HTTP iniciado\n"); 
} 
 
// ---------------- MAIN ------------------ int main(void) { 
     stdio_init_all();     sleep_ms(2000); 
 
    // Inicializar GPIO de dirección     gpio_init(IN1);     gpio_set_dir(IN1, GPIO_OUT); 
     gpio_init(IN2);     gpio_set_dir(IN2, GPIO_OUT); 
     gpio_init(IN3);     gpio_set_dir(IN3, GPIO_OUT); 
     gpio_init(IN4);     gpio_set_dir(IN4, GPIO_OUT); 
 
    // Inicializar PWM     pwm_init_pin(ENA);     pwm_init_pin(ENB); 
     stop_all(); 
 
    // Inicializar Wi-Fi     if (cyw43_arch_init()) {         printf("Error al inicializar Wi-Fi\n");         return 1; 
    }      cyw43_arch_enable_sta_mode(); 
 
    printf("Conectando a Wi-Fi...\n"); 
 
    int result = cyw43_arch_wifi_connect_timeout_ms( 
        WIFI_SSID, 
        WIFI_PASSWORD, 
        CYW43_AUTH_WPA2_AES_PSK, 
        30000 
    );      if (result != 0) {         printf("No se pudo conectar. Error: %d\n", result);         cyw43_arch_deinit();         return 1; 
    }      printf("Wi-Fi conectado\n"); 
 
    // Mostrar la IP obtenida     printf("Servidor listo. Consultar IP desde la consola.\n"); 
     iniciar_servidor(); 
     while (true) {         cyw43_arch_poll();         sleep_ms(10); 
    }      cyw43_arch_deinit();     return 0; 
} 
Nota técnica: este código es una base de referencia. En un proyecto real debe verificarse la versión del Pico SDK, la configuración de lwIP y la forma de compilación del proyecto. También conviene mejorar el manejo de conexiones y agregar un mecanismo de seguridad que detenga el robot si se pierde la comunicación durante un tiempo determinado. 
Configuración básica del proyecto con Pico SDK 
Para compilar el programa no alcanza con guardar el archivo .c. El proyecto debe estar configurado para utilizar el Pico SDK y la biblioteca de conectividad de la Pico W. Una configuración de CMake de referencia puede ser la siguiente: 
cmake_minimum_required(VERSION 3.13) 
 include(pico_sdk_import.cmake) 
 project(robot_wifi C CXX ASM) 
 pico_sdk_init() 
 add_executable(robot_wifi     main.c 
)  target_link_libraries(robot_wifi     pico_stdlib 
 
    pico_cyw43_arch_lwip_threadsafe_background 
    hardware_pwm 
)  pico_enable_stdio_usb(robot_wifi 1) pico_enable_stdio_uart(robot_wifi 0) 
 pico_add_extra_outputs(robot_wifi) 
La biblioteca pico_cyw43_arch_lwip_threadsafe_background proporciona la integración de la conectividad Wi-Fi de la Pico W con la pila de red lwIP en un modo apropiado para este tipo de aplicación. Según la versión del SDK y la configuración del proyecto, puede ser necesario ajustar las bibliotecas vinculadas. 
Plan de pruebas recomendado 
1.	Probar primero el PWM y el movimiento de cada motor sin Wi-Fi. 
2.	Comprobar que la Pico W se conecta correctamente a la red Wi-Fi. 
3.	Leer por la consola serie la información de conexión y la dirección IP. 
4.	Desde un navegador del celular, probar una ruta sencilla, por ejemplo /stop. 
5.	Probar /adelante, /atras, /izquierda y /derecha con el robot levantado o en una condición segura. 
6.	Verificar que el botón STOP detenga inmediatamente ambos motores. 
7.	Integrar el HC-SR04 y comprobar que un obstáculo pueda generar una detención automática. 
8.	Recién después diseñar la interfaz definitiva y generar el APK. 
Consideraciones de seguridad y funcionamiento 
Los motores no deben alimentarse directamente desde los GPIO de la Pico W. La alimentación de los motores debe realizarse mediante el controlador correspondiente y una fuente adecuada. La Pico W debe compartir GND con el circuito de control para que las señales tengan una referencia común. 
También se recomienda implementar una condición de parada por pérdida de comunicación. En un vehículo controlado remotamente, no conviene que el último comando de movimiento quede activo indefinidamente si el celular se desconecta. Una solución consiste en utilizar un temporizador o un mecanismo de watchdog de comunicación: si durante un intervalo determinado no llega una orden válida, se ejecuta stop_all(). 
Ventajas de la solución propuesta 
•	La Pico W ya posee Wi-Fi integrado, por lo que no requiere un módulo inalámbrico adicional. 
•	El código de control de motores existente puede reutilizarse. 
•	El PWM permite modificar la velocidad del robot. 
•	La comunicación por HTTP es sencilla de probar y comprender durante el desarrollo. 
•	El control puede realizarse desde Android mediante una aplicación o, durante las pruebas, incluso desde un navegador. 
•	El HC-SR04 puede mantenerse como sistema de detección de obstáculos. 
•	La arquitectura separa la interfaz del celular del firmware que controla el hardware. 
Limitaciones y aspectos a verificar 
El alcance de Wi-Fi depende del entorno y de la red utilizada. Además, la comunicación HTTP introduce cierta latencia y no está pensada para un control de movimiento de precisión en tiempo real. Para un autito escolar esto puede ser suficiente, pero si se necesita una respuesta extremadamente rápida puede considerarse posteriormente un protocolo más liviano. 
El código incluido debe probarse con la versión de Pico SDK instalada por el equipo. Las API y opciones de compilación pueden variar entre versiones. Por esta razón, el código se presenta como base de investigación e integración y no como una garantía de compilación idéntica en cualquier instalación. 
Conclusión 
La Raspberry Pi Pico W permite implementar un control inalámbrico del autito sin agregar un módulo Wi-Fi externo. La solución propuesta utiliza C y el Pico SDK para que la Pico W se conecte a una red, reciba órdenes mediante HTTP y controle el L298N mediante GPIO y PWM. El teléfono Android actúa como interfaz de usuario y puede utilizar una aplicación distribuida como APK. 
La estrategia recomendada es desarrollar el sistema progresivamente: primero verificar el control de los motores, luego establecer la comunicación Wi-Fi, después conectar los comandos con las funciones de movimiento, integrar el sensor de proximidad y finalmente desarrollar la aplicación Android. Este orden permite detectar errores por etapas y evita intentar resolver simultáneamente problemas de hardware, programación y comunicación. 
Fuentes de consulta 
•	Raspberry Pi Documentation – Raspberry Pi Pico Series: 
https://www.raspberrypi.com/documentation/microcontrollers/ 
•	Raspberry Pi Pico SDK Documentation: https://datasheets.raspberrypi.com/pico/raspberrypi-pico-c-sdk.pdf 
•	Raspberry Pi Pico SDK – ejemplos y documentación oficial: https://github.com/raspberrypi/pico-examples 
•	lwIP – Lightweight IP stack, documentación oficial: https://www.nongnu.org/lwip/ 
•	MIT App Inventor – documentación oficial: https://appinventor.mit.edu/ 
•	STMicroelectronics – L298 datasheet: https://www.st.com/resource/en/datasheet/l298.pdf