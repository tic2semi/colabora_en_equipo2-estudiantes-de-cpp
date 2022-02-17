# act-colaborando
Actividad para comprender el flujo de trabajo en equipo usando github.
Vamos a dividir la clase en equipos. Tú, como miembro de tu equipo, realizarás una única tarea de programación. Finalmente integrarás tu trabajo en la versión más actualizada del programa, asegurando que toda funciona correctamente.

# Pasos para realizar la actividad
## Preparación del repositorio local
1. **Clona** el repositorio de esta actividad en una carpeta local de tu ordenador.
2. *Justo antes de empezar a trabajar*, **actualíza** tu repositorio local con todos los cambios de tus compañeros (git pull).

## Selección de la tarea a realizar
3. Abre el archivo de C++ o Python según corresponda, y lee los comentarios que indican las distintas **tareas a realizar**.
Importante: mira también las **ramas existentes del proyecto**, para saber en qué están trabajando tus compañeros.
4. **Escribe tu nombre** junto a la primera tarea sin comenzar.

Ejemplo: #Tarea 1: realizar tal y cual ==> #Tarea 1 (Manuel Pérez): realizar tal y cual.

## Creación de una rama para desarrollar tu tarea
5. **Crea una rama (branch)** a partir de la versión más actualizada del respositorio principal, y asígnale un nombre descriptivo para que tus compañeros sepan la funcionalidad que vas a desarrollar en esa rama. Trabajar en una rama te permite escribir código con libertad, sin interferir con los cambios de tus compañeros en otras ramas.
6. **Activa tu nueva rama** en tu directorio local de trabajo (git checkout), es decir haz que los archivos de tu repositorio *apunten* a esa rama.

## Desarrollando la tarea
7. Comienza a **escribir el código** de tu tarea, y realiza al menos *2 validaciones de código (commits)* añadiendo a la descripción del 'commit' un texto que describa los cambios que incorporan: la primera validación puede ser para el código en sí; la segunda validación puede ser para añadir comentarios en el código.
Cada validación o commit irá acompañada de 'git push' para cargar en el proyecto remoto en github los cambios que vas haciendo.

8. Asegúrate de que el **programa funciona correctamente** y sin errores, antes de proceder. Si hay errores, corrígelos y vuelve a validar los cambios.

9. Ahora que tu tarea está terminada y funciona sin errores, **crea una etiqueta para tu rama** que nos permita en el futuro volver a esa versión limpia y operativa de la tarea que has implementado.

## Integrando tu trabajo con el de tus compañeros
A continación vas a fundir o combinar la rama en la que has realizado tu tarea (libre de errores), con la versión más reciente de la rama principal del proyecto (tronco, rama principal, trunk, main, o head).

10. **Actualiza tu repositorio local** con los últimos cambios del proyecto en github (git pull).

11. En tu directorio local, **activa la rama principal** del proyecto (tronco, main, head, trunk).

12. **Combine la rama principal con tu rama secundaria** (git merge), para integrar tu trabajo en la versión principal del proyecto.

13. Si hay *conflictos*, porque los cambios de varios programadores se solapan en el mismo archivo, **resuelve los conflictos** con la herramienta diff (Merge Meld, o diff de GitKraken), hasta asegurar que todos tus cambios están en el lugar correcto del archivo de la rama principal.

14. Ahora tus cambios están cargados en la rama principal. Lanza el programa y **asegura que funciona correctamente**, y que no hay errores. Si los hubiera, corrígelos y valida los cambios con los commit que necesites.

15. Una vez que la rama principal tiene tus cambios y está depurada sin errores, **crea una etiqueta para la rama principal**, con un nombre apropiado. Esta etiqueta permitirá en un futuro recuperar la versión actual de la rama principal, por ejemplo si posteriores commit y merge de otros compañeros introducen errores, o rompen alguna funcionalidad.

## Tomando perspectiva del trabajo del equipo
16. Revisa en github el histórico de commits y merge del proyecto, y trata de **comprender el recorrido** que ha tenido el proyecto con las aportaciones tuyas y de tus compañeros. Opcionalmente puedes hacerlo también con la herramienta GitKraken.
