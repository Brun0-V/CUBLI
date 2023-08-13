# Ante proyecto | Vega Ferrería <!-- omit from toc -->

### Indice <!-- omit from toc -->
- [1. Descripción de la problemática](#1-descripción-de-la-problemática)
- [2. Características del sistema](#2-características-del-sistema)
- [3. Estado del arte / Antecedentes / Implementaciones previas.](#3-estado-del-arte--antecedentes--implementaciones-previas)
- [4. Estudio de Factibilidad - Investigación de soluciones](#4-estudio-de-factibilidad---investigación-de-soluciones)
- [5. Diagrama de Bloques](#5-diagrama-de-bloques)
- [6. Análisis de Costos](#6-análisis-de-costos)
- [7. Planificación y distribución de Tareas](#7-planificación-y-distribución-de-tareas)


### 1. Descripción de la problemática
El proyecto presentado consiste del balanceo de figuras, en este caso un cubo, sobre uno o más de sus ejes. Ésto es logrado a través del uso de ruedas de reacción para invertir la caída del cubo, logrando asi la estabilidad del mismo sobre una arista o esquina de este.

Esta tecnología puede ser transpolada a un caso mucho mayor, como el posicionamiento de objetos en el espacio, donde poder reajustar el angulo de estos sin el uso de combustibles.

Junto a su uso en la ingeniería espacial, el proyecto da una introducción a los alumnos a nuevas tecnologías como el control PID (**P**roporcional, **I**ntegral, **D**erivativo) y abre la puerta para el aprendizaje sobre todo el respaldo que le dá la fisica al mismo. 

### 2. Características del sistema
» Detallar cuáles características serán obligatorias de realizar y cuáles serán las optativas / futuras mejoras

Como caracteristicas obligatorias, el cubo debe contar con un microcontrolador, el acelerómetro y giroscopio como sus sensores, balanceo sobre 1 (uno) de sus ejes para lo que se usaría 1 motor como minimo. Sobre esa base se le puede dar mas funcionalidad, la primera que se piensa abordar es el balance sobre los 3 (tres) ejes del mismo, pasando de balancearse sobre una arista, a balancearse sobre una de sus esquinas. Luego de esto, la implementación de frenos en las ruedas de reaccion para que el mismo pueda "saltar", asi como también la conexion con un dispositivo externo (Computadora / Smartphone) para monitoreo de sensores y/o control del robot.

### 3. Estado del arte / Antecedentes / Implementaciones previas.
En la búsqueda de soluciones para proyectos similares o relacionados con el control y la estabilidad en la robótica, se pueden encontrar varios antecedentes que destacan por su enfoque en el equilibrio y el movimiento dinámico de objetos. Uno de los ejemplos más notables es el "Cubli" un dispositivo robótico desarrollado por investigadores de ETH Zürich que presenta las siguientes características clave:

- **Equilibrio sobre una esquina**: El Cubli es capaz de mantenerse en equilibrio sobre una de sus esquinas. Esta habilidad demuestra un control preciso del centro de masa y conceptos avanzados de estabilidad.

- **Control de movimiento**: Además del equilibrio estático, el Cubli puede realizar giros y cambios de posición en el aire. Este control se logra mediante ruedas de reaccion controladas de manera individual.

- **Plataforma de investigación**: El Cubli no solo es una creación impresionante por sí misma, sino que también funciona como una plataforma de investigación. Permite explorar y demostrar conceptos avanzados en control, mecánica y dinámica de sistemas robóticos.

- **Aplicaciones potenciales**: Aunque el Cubli puede no tener aplicaciones prácticas directas, sus conceptos y tecnologías pueden ser relevantes para sistemas de estabilización, maniobras espaciales y otras áreas de la robótica donde el control de movimiento y la estabilidad son esenciales.

### 4. Estudio de Factibilidad - Investigación de soluciones 
» Realizar una investigación de cómo implementar el proyecto y proponer posibles soluciones comparándolas.



### 5. Diagrama de Bloques 
» Realizar un diagrama en donde se detallen los bloques funcionales (no la tecnología empleada) y la relación entre cada uno.
- Describan en detalle cada uno de los bloques y sus relaciones.
- Detallar las etapas que van ser obligatorias de realizar con su funcionamiento y detallar que etapas serán opcionales y de implementaciones futuras

![Diagrama de bloques simplificado](Images/Diagrama-Bloques.png)

Este diagrama de bloques se divide en 4 (cuatro) partes:
- **Sensores**: En ésta se encuentran los sensores que se utilizarán en el proyecto:
  - Sensor de Efecto Hall: Este determina la posición angular absoluta de cada motor para su manejo de forma precisa.
  - Acelerómetro: Este mide la aceleración del robot, trabaja en conjunto con el giroscópio.
  - Giroscópio: Este sirve para medir, mantener o cambiar la orientación en el espacio del robot.
- **Procesadores**: En ésta se encuentran los elementos de procesado que se utilizarán en el proyecto:
  - Microcontrolador: Este es el encargado de todo el procesamiento y acondicionamiento de los datos enviados desde los sensores hacia el mismo, para luego ser enviados a los actuadores.
- **Actuadores**: En ésta se encuentran los actuadores utilizados en el proyecto:
  - Motores: Éstos son los encargados de cambiar el movimiento angular del robot logrando, con ordenes enviadas del microcontrolador, mantener el robot balanceado.
- **Comunicación**: En ésta se encuentran los canales de comunicación que serán utilizados en el proyecto:
  - Computadora: Esta podrá comunicarse con el robot a través del puerto serial cableado para enviar datos del funcionamiento del mismo y variables del entorno en tiempo real.
  - Smartphone: Estos podrán comunicarse por una conexión inalámbrica, como Bluetooth o Wi-Fi para monitoreo y envio de datos.



### 6. Análisis de Costos

<div align="center">

 Cant |                       Item                      | Precio
:----:|-------------------------------------------------|---------
 1    |          ESP32 - Wi-Fi & Bluetooth MCU          | 4200AR$ / 7U$D*
 1    |      Modulo Acelerometro Giróscopo MPU6050      | 1800AR$ / 3U$D*
 3    |  12-bit Magnetic Rotary Position Sensor AS5600  | 2000 AR$ / 3.3 U$D*
 3    |                     (MOTOR)                     | (PRECIO)*
 1    |                    (BATERIA)                    | (PRECIO)*
Total |                                                 | (PRECIO TOTAL)
</div>

*Todos los precios son tasados al (dd/mm/yyyy)

### 7. Planificación y distribución de Tareas
» Identificar las etapas (y sub-etapas) para la realización del proyecto. 
Describir cada una de las etapas (y sub-etapas). 
Identificar, de forma clara y concisa, las correlatividades, los objetivos a lograr en cada una, y los pasos a realizar para concretarlas. 
Distribución de tareas entre los miembros del grupo. 
Diagramación de los tiempos de cada etapa (y sub-etapas)
