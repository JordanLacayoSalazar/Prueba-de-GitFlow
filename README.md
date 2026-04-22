# Gitflow

Modelo de ramificación estructurado para Git, diseñado para gestionar el desarrollo de software complejo y las versiones mediante ramas predefinidas (master, develop, feature, release, hotfix). Creado por Vincent Driessen en 2010, este flujo separa el código en desarrollo del de producción, siendo ideal para equipos grandes. 

### ***Ramas:***

```text
main
└── develop
    ├── feature
    └── bugfix 
```

**main (master)**: Contiene los códigos finales que los usuarios pueden usar. Cada "commit" representa una versión oficial.

**develop**: Rama principal de desarrollo donde se integran todas las nuevas funciones terminadas. Aquí es donde se construye el código para su próximo lanzamiento oficial.

*feature*: Ramas temporales que salen de develop para trabajar en una funcionalidad específica. Una vez terminada la tarea, se fusionan de nuevo en develop.

*bugfix*: Se crea a partir de la rama develop para corregir errores que se encuentran durante el ciclo de desarrollo normal. Una vez solucionado, se fusiona con develop.

> [!NOTE]
> Según el PDF adjuntado (material dado por un profesor), para realizar el merge en GitHub, se hace lo siguiente:
> 1. Crear un **Pull request** de la rama que acaba de subir hacia dev, por ejemplo, dentro de
> github crear pull request y revisar que quede de forma feature/menú → dev que la
> rama de origen sea la nueva y se vaya a agregar a dev.
> 2. Asegurarse de que no haya conflictos, aprobar el pull request y hacer el merge.
