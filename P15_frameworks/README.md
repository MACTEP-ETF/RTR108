15. nodarbības izmēģinājums
Apraksti, bildes ar pārlūkprogrammas izskatu, pārbaudot servera darbību lokāli un globāli.  
*Piezīme*:  
Šīs nodarbības apguvei studēju šo web-kursu: *https://app.pluralsight.com/course-player?clipId=33017302-131d-43db-bc3f-e8ea1c1ecc53*

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
   - Defined with a decorator (a function that adds *metadata* to a class, its members, or its methoods arguments).  

### Component Checklist
- Class -> Code  
- Decorator -> Metadata  
- Import what we need (import)  
 
#### Component Checklist: *Class*  
- **Clear name**:  
  - Use PascalCasing  
  - Append "Component" to the name  

- **export keyword**  

- **Data in properties**:  
  - Approriate data type  
  - Approriate default value  
  - camelCase with first letter lowercase  

- **Logic in methods**  
  - camelCase with first letter lowercase

#### Component Checklist: *Metadata*  
- **Component decorator**  
  - Prefix with @. Suffix with ()  
  
- **selector: Component name in HTML**  
  - Prefix for clarity  
  
- **template: View's HTML**  
  - Correct HTML syntax  

#### Component Checklist: *Import*  
- **Defines where to find the members that this component needs**  
- **import keyword**  
- **Member name**  
  - Correct spelling/casing  
- **Module path**  
  - Enclose in quotes  
  - Correct spelling/casing  

# Servera darbība lokāli un globāli
Lai palasitu lokāli, VS code terminālā jāraksta: **npm start**  
Lai palasitu globāli, VS code terminālā jāraksta: **ngrok http --host-header=rewrite PORT**  
