15. nodarbības izmēģinājums
Apraksti, bildes ar pārlūkprogrammas izskatu, pārbaudot servera darbību lokāli un globāli.
Šīs nodarbības apguvei izmantoju šo web-kursu: *https://app.pluralsight.com/course-player?clipId=33017302-131d-43db-bc3f-e8ea1c1ecc53*

## Component
Component is a view defined in Template. It is associated code defined with a Class and Metadata defined with a decorator.
1. Template:  
   - View layout;  
   - Created with HTML;  
   - Includes binding ad directives.  
2. Class:  
   - Code supporting the view;  
   - Created with TypeScript;  
   - Properties: data;  
   - Methods: logic.  
3. Metadata:  
   - Extra data for Angular;  
   - Defined with a decorator.  

### Decorator
 A function that adds *metadata* to a class, its members, or its methoods arguments.  
 Prefixed with an @.  
 Angular provides built-in decorators.  
 **@Component()**  

# Servera darbība lokāli un globāli
Lai palasitu lokāli, VS code terminālā jāraksta: **npm start**  
Lai palasitu globāli, VS code terminālā jāraksta: **ngrok http --host-header=rewrite PORT**  
