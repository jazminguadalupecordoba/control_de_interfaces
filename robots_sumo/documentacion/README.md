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
