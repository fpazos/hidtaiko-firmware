# ◇Conector RP2040 ver1.0
#### Es un circuito con una resistencia de 1MΩ conectada en paralelo al sensor. Tiene un rendimiento y estabilidad ligeramente inferior a la versión 1.1, pero el circuito es más simple.
<img src="images\ver1.0_circuit.png" width= "500px" >
<img src="images\rp2040_ver1.0.jpg" width= "500px" >

### Lista de componentes
#### [Guía de fabricación](https://zenn.dev/kasashiki/articles/28d31814b8bf86)
| Componente | Cantidad | Enlace |
| ---- | ---- | ---- |
| rp2040zero | 1 | [Con 4 pines ADC](https://ja.aliexpress.com/item/1005005407839815.html) |
| Resistencia 1/4W 1MΩ | 4 | [Juego de resistencias](https://www.amazon.co.jp/dp/B0CT8PJ97X) |
| Conector de pines 4×2 | 1 | [Conector de pines en L](https://www.amazon.co.jp/dp/B00TRTIB7O) |
| Placa base | 1 | [Placa protoboard](https://www.amazon.co.jp/dp/B0CMHD34G6) |
| Tornillos M3×5mm | 4 | [Juego de tornillos](https://www.amazon.co.jp/dp/B09SCV6HL5) |
| Carcasa impresa en 3D | 1 | [Archivo STL](https://github.com/kasasiki3/HIDtaiko/tree/master/HIDtaiko_connector_rp2040/case) |

### Rendimiento
※Algunos simuladores pueden no reconocer la entrada de teclas sin restricción de entrada, por lo que este rendimiento podría no alcanzarse.

・Se incluyen todos los procesos de rollo, incluyendo procesamiento de Doka y Kado

・Golpes de rollo rápido (un golpe): 13

・Doble golpe antiguo rápido (Dokimune): 1000

#### [Video de juego](https://www.youtube.com/watch?v=6kISQiHiIU8&t=2s)


# ◇Conector RP2040 ver1.1

#### Se agregó un circuito de sujeción mediante diodos Schottky, mejorando el rendimiento y la estabilidad.
<img src="images\ver1.1_circuit.png" width= "500px" >
<img src="images\rp2040_ver1.1.jpg" width= "500px" >

### Lista de componentes
| Componente | Cantidad | Enlace |
| ---- | ---- | ---- |
| rp2040zero | 1 | [Con 4 pines ADC](https://ja.aliexpress.com/item/1005005407839815.html) |
| Resistencia 1MΩ | 4 | [Juego de resistencias](https://www.amazon.co.jp/dp/B0CT8PJ97X) |
| Diodo Schottky | 8 | [Verificado en funcionamiento](https://ja.aliexpress.com/item/1005001552094086.html?spm=a2g0o.productlist.main.1.6e44uelOuelObK&algo_pvid=324fc66a-4f51-4271-9d8e-bdbd04cb3111&algo_exp_id=324fc66a-4f51-4271-9d8e-bdbd04cb3111-0&pdp_ext_f=%7B%22order%22%3A%223070%22%2C%22eval%22%3A%221%22%7D&pdp_npi=4%40dis%21JPY%21243%21240%21%21%211.64%211.62%21%402140e67317474622478812536e3626%2112000016564939110%21sea%21JP%214091964399%21X&curPageLogUid=Vd5VeMGYBVVc&utparam-url=scene%3Asearch%7Cquery_from%3A) |
| Resistencia 1KΩ | 4 | [Juego de resistencias](https://www.amazon.co.jp/dp/B0CT8PJ97X) |
| Conector de pines 4×2 | 1 | [Conector de pines en L](https://www.amazon.co.jp/dp/B00TRTIB7O) |
| Placa base | 1 | [Placa protoboard](https://www.amazon.co.jp/dp/B0CMHD34G6) |
| Tornillos M3×5mm | 4 | [Juego de tornillos](https://www.amazon.co.jp/dp/B09SCV6HL5) |
| Carcasa impresa en 3D | 1 | [Archivo STL](https://github.com/kasasiki3/HIDtaiko/tree/master/HIDtaiko_connector_rp2040/case) |


### Rendimiento
※Algunos simuladores pueden no reconocer la entrada de teclas sin restricción de entrada, por lo que este rendimiento podría no alcanzarse.

・Se incluyen todos los procesos de rollo, incluyendo procesamiento de Doka y Kado

・Golpes de rollo rápido (un golpe): 13

・Doble golpe antiguo rápido (Dokimune): 1200

#### [Video de juego](https://www.youtube.com/watch?v=wMSDLN9h2Co)

# Cómo hacer el conector rp2040zero

## ◇Introducción
#### ・Esta guía requiere conocimientos de soldadura y la capacidad de leer circuitos simples. Si tiene preguntas, contácteme por mensaje directo.
#### ・Los productos terminados se venden en Mercari. [(Mercari)](https://jp.mercari.com/user/profile/175469287)
#### ・Se requiere un soldador y cortaúñas.
#### ・

## ◇Componentes a utilizar
<img src="images\rp2040build guide\parts.jpg" width= "500px" >

### Lista de componentes
| Componente | Cantidad | Enlace |
| ---- | ---- | ---- |
| rp2040zero | 1 | [Con 4 pines ADC](https://ja.aliexpress.com/item/1005005407839815.html) |
| Resistencia 1MΩ | 4 | [Juego de resistencias](https://www.amazon.co.jp/dp/B0CT8PJ97X) |
| Diodo Schottky | 8 | [Verificado en funcionamiento](https://ja.aliexpress.com/item/1005001552094086.html?spm=a2g0o.productlist.main.1.6e44uelOuelObK&algo_pvid=324fc66a-4f51-4271-9d8e-bdbd04cb3111&algo_exp_id=324fc66a-4f51-4271-9d8e-bdbd04cb3111-0&pdp_ext_f=%7B%22order%22%3A%223070%22%2C%22eval%22%3A%221%22%7D&pdp_npi=4%40dis%21JPY%21243%21240%21%21%211.64%211.62%21%402140e67317474622478812536e3626%2112000016564939110%21sea%21JP%214091964399%21X&curPageLogUid=Vd5VeMGYBVVc&utparam-url=scene%3Asearch%7Cquery_from%3A) |
| Resistencia 1KΩ | 4 | [Juego de resistencias](https://www.amazon.co.jp/dp/B0CT8PJ97X) |
| Conector | 1 | [Conector de pines en L](https://www.amazon.co.jp/dp/B00TRTIB7O) |
| Placa base | 1 | [Placa base](https://ja.aliexpress.com/item/1005007024264426.html?spm=a2g0o.productlist.main.1.58f3t5bst5bs34&algo_pvid=35c5a8f6-3d56-44ee-9113-470bb06a20f4&algo_exp_id=35c5a8f6-3d56-44ee-9113-470bb06a20f4-0&pdp_ext_f=%7B%22order%22%3A%2214841%22%2C%22eval%22%3A%221%22%7D&pdp_npi=4%40dis%21JPY%21725%21259%21%21%2135.78%2112.79%21%402102f0c917488537225005440e13b2%2112000039118829302%21sea%21JP%214091964399%21X&curPageLogUid=Qk7jOzGtDkLS&utparam-url=scene%3Asearch%7Cquery_from%3A) |
| Cable puente | (Opcional) | [Juego](https://ja.aliexpress.com/item/1005006014728282.html?spm=a2g0o.productlist.main.37.12885206AgZpJh&algo_pvid=561f216c-3a62-4482-b9bc-fc6432844178&algo_exp_id=561f216c-3a62-4482-b9bc-fc6432844178-36&pdp_ext_f=%7B%22order%22%3A%221022%22%2C%22eval%22%3A%221%22%7D&pdp_npi=4%40dis%21JPY%21327%21317%21%21%2116.14%2115.63%21%402102f0c917488538174972166e13be%2112000035329293181%21sea%21JP%214091964399%21X&curPageLogUid=mCZzehOhYLgt&utparam-url=scene%3Asearch%7Cquery_from%3A) |


## ◇Diagrama del circuito y ejemplo de montaje
#### La forma del cableado es libre. Este es un ejemplo. Por favor, verifique el pin GPIO del RP2040zero y conecte correctamente sin cometer errores.

<img src="images\rp2040build guide\front.jpg" width= "500px" >

Circuito completo

<img src="images\rp2040build guide\whole circuit.png" width= "500px" >

Prepare 4 de estos circuitos.

<img src="images\ver1.1_circuit.png" width= "500px" >


## ◇Soldar el rp2040zero
#### Primero, fije el conector de pines al rp2040zero.

<img src="images\rp2040build guide\2.jpg" width= "500px" >

#### Luego, fijelo a la placa base.

<img src="images\rp2040build guide\4.jpg" width= "500px" >

## ◇Instalación del conector

#### Ajuste para que sea paralelo a la placa base.

<img src="images\rp2040build guide\7.jpg" width= "500px" >

<img src="images\rp2040build guide\8.jpg" width= "500px" >

## ◇Instalación de otros componentes electrónicos

<img src="images\rp2040build guide\front.jpg" width= "500px" >
<img src="images\rp2040build guide\11.jpg" width= "500px" >

#### Comprenda el circuito y coloque los componentes.
#### Una vez colocados los componentes, primero suéldelos a la placa base.
#### Después, doble los pines de los componentes electrónicos y realice el cableado.

<img src="images\rp2040build guide\back.jpg" width= "500px" >

## ◇Carga de firmware

#### Descargue el [firmware](original_uf2/hidtaiko.uf2) y ábralo en el explorador.
#### A continuación, presione este botón mientras conecta la PC con un cable USB

<img src="images\rp2040build guide\3.jpg" width= "500px" >

#### Se reconocerá como almacenamiento, así que inserte el firmware arrastrándolo y soltándolo.


## ◇Cambio de sensibilidad

Acceda a la [aplicación de cambio de sensibilidad](https://kasasiki3.github.io/ver1.3_webapp_rp2040version/) y envíe la sensibilidad básica al conector.


#### Cuando pueda ingresar datos, ¡estará completo!