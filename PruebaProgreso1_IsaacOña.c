#include <stdio.h>
#include <string.h>
//Isaac Jesus Oña Suntaxi
//Login de usuario y contraseña
int login () {
    char usuarios[3][100] = {"KTM", "Kawasaki", "Ducati"};
char contrasenas[3][100] = {"duke200", "Ninja400", "PanigaleV4"};
int intentos = 3;
//Declaro los intentos
while (intentos > 0) {
    char cliente[100];
    char password [100];
    printf ("Ingrese usuario:");
    scanf ("%s", cliente);
    printf ("Ingrese contrasena:");
    scanf ("%s",password);
    for (int i = 0; i < 3; i++) {
        //utilizo la funcion "strcmp" para decir que lo que se lee en la variable cliente debe ser igual a lo que se declaro dentro del char "usuarios" y lo mismo para la contraseña
    if (strcmp(cliente, usuarios[i]) == 0 && strcmp(password, contrasenas[i]) == 0) {
//el return 1 utilizo que en caso que haya algun error en el programa y no se ejecuta como se deseo, se devuelve al principio en este caso desde "Ingrese usuario"
return 1;
}
}
 intentos--;
printf("Usuario o contrasena fallidos. Intento #%d\n", 4 - intentos);
    }
printf("Imposible ingresar.\n");
    return 0;
}
// función para realizar operación de transporte
void transporte() {
    printf("Ha seleccionado la opción de Operación de transporte.\n");
}
// Void del Menu
void menu() {
    int opcion;
    //Aqui utilizo un while(1)  sirve para ejecutar un grupo de instrucciones que depende de cierta condición. Se ejecuta si y sólo si esa condición es verdadera.
    while (1) {
printf("Seleccione una opción:\n");
printf("1. Operación de transporte\n");
printf("2. Interactuar en la red social\n");
printf("3. Salir\n");
scanf("%d", &opcion);
    switch (opcion) {
        case 1:
    operacionTransporte(operacionTransporte);
        break;
        case 2:
    redSocial(redSocial);
        break;
        case 3:
printf("Saliendo del programa...\n");
        break;


    default:
        printf("Opción inválida. Seleccione una opción válida.\n");
            break;
        }
    }
}
//Utilizo el float para declarar numeros decimales
float calcularPrecioRuta(char tipoRuta, float distancia) {
    float precioPorKm;
    //Utilizo el "if" para cumplir una declaracion, donde si el usuario ingresa Ur debe realizar una condicion, y si ingresa In debe realizar otra condicion
    if (tipoRuta == 'U') {
        precioPorKm = 0.10;
    } else if (tipoRuta == 'I') {
        precioPorKm = 0.15;
    } else {
        precioPorKm = 0.20;
    }
    return precioPorKm * distancia;
}
//Utilizo otro float para calcular el descuento del kilometraje
float calcularDescuento(float costoTotal) {
    float descuento = 0.0;
    if (costoTotal >= 500.0) {
        descuento = 0.20 * costoTotal;
    } else if (costoTotal >= 100.0) {
        descuento = 0.10 * costoTotal;
    } else if (costoTotal >= 50.0) {
        descuento = 0.05 * costoTotal;
    }
    return descuento;
}
//Un void para la operacion que se debe realizar con los descuentos y el kilometraje
void operacionTransporte() {
printf("\ operaciónTransporte\n");
//Aqui utilizo el for para que se repita de 1 a 5 en pasos de 1 , ya que eso es lo que nos pide el ejercicio.
for (int i = 1; i <= 5; i++) {
    printf("\nCliente %d\n", i);
    char tipoRuta;
    float distancia;
    printf("Ingrese el tipo de ruta (U=urbana, I=interurbana, N=internacional): ");
    scanf(" %c", &tipoRuta);
    printf("Ingrese la distancia en kilómetros: ");
    scanf("%f", &distancia);
    float precio = calcularPrecioRuta(tipoRuta, distancia);
    float descuento = calcularDescuento(precio);
    float total = precio - descuento;
    printf("Subtotal: $%.2f\n", precio);
    printf("Descuento: $%.2f\n", descuento);
    printf("Total: $%.2f\n", total);
    }
}
//Utilizo un VOID para red social

void redSocial() {
printf("\nInteractuar en la red social\n");
int noticias = 0, eventos = 0, preguntas = 0;
//utilizo el for para que se puede ejecutar el programa hasta 5, desde 1 a 5, a pasos de 1
for (int i = 1; i <= 5; i++) {
printf("\nPublicación %d\n", i);
char categoria;
//Dentro de este char declaro que debe haber un mensaje de maximo de 100 caracteres
char mensaje[100];
printf("Ingrese el contenido del mensaje: ");
scanf(" %[^\n]", mensaje);
printf("Seleccione una categoría para el mensaje:\n");
printf("N. Noticias\n");
printf("E. Eventos\n");
printf("P. Preguntas\n");
scanf(" %c", &categoria);
switch (categoria) {
    case 'N':
        noticias++;
        break;
    case 'E':
        eventos++;
        break;
    case 'P':
        preguntas++;
        break;
    default:
        printf("Categoría inválida. Seleccione una categoría válida.\n");
        i--;
        break;
    }
}
printf("\nResumen de publicaciones:\n");
printf("Noticias: %d\n", noticias);
printf("Eventos: %d\n", eventos);
printf("Preguntas: %d\n", preguntas);
}
// Despues de haber declaro tanto como la funcion transporte y la funcion red social puede utilizar un int main, para ahora si poder declarar un menu
int main() {
int resultado = login();
if (resultado == 1) {
    //Desde aqui se inicia el programa
    printf("Bienvenido al sistema.\n");
    menu();
    operacionTransporte();
    redSocial();
    //aqui va colocado este else ya que si al principio no se ingresaba bien la contraseña y el usuario, se imprime no se pudo iniciar sesion
} else {
    printf("No se pudo iniciar sesión.\n");
}
return 0;
}

