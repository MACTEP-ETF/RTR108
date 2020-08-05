# Servera darbība lokāli un globāli VS code  
Lokāli, terminālā jāraksta: **npm start**  
Globāli, terminālā jāraksta: **ngrok http --host-header=rewrite PORT**  

*Piezīme*:  
Šīs nodarbības apguvei studēju šo web-kursu: *https://app.pluralsight.com/course-player?clipId=33017302-131d-43db-bc3f-e8ea1c1ecc53*

## Common features of Angular template syntax
- **ngFor** – A structural directive that renders a template for each item in a collection. The directive is placed on an element, which becomes the parent of the cloned templates.  
- **ngIf** – A structural directive that conditionally includes a template based on the value of an expression coerced to Boolean. When the expression evaluates to true, Angular renders the template provided in a then clause, and when false or null, Angular renders the template provided in an optional else clause. The default template for the else clause is blank.  
- **Interpolation {{ }}** – renders a property's value as text.  
- **Property binding [ ]** – lets you use the property value in a template expression.  
- **Event binding ( )** – uses a set of parentheses, ( ), around the event.

## Components
Components define areas of responsibility in the user interface, or UI, that let you reuse sets of UI functionality. A component consists of three things:  
- **A component class** – that handles data and functionality: Code supporting the view; Created with TypeScript; Properties: data; Methods: logic.  
- **An HTML template** – that determines the UI. It is a view layout,  and Includes binding and directives.  
- **Component-specific styles** – that define the look and feel. Defined with a decorator (a function that adds *metadata* to a class, it's members, or its methoods arguments).  

### Decorator
**@Component() decorator** – this indicates that the following class is a component. It provides metadata about the component, including its selector, templates, and styles.  
- The selector identifies the component. The selector is the name you give the Angular component when it is rendered as an HTML element on the page. By convention, Angular component selectors begin with the prefix app-, followed by the component name.  
- The template and style filenames reference the HTML and CSS files.  

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
  
## Input
The @Input() decorator indicates that the property value passes in from the component's parent, the product list component.  

## Output
```
import { Output, EventEmitter } from '@angular/core';
```
In the component class, define a property named *PropertyName* with an *@Output()* decorator and an instance of *EventEmitter()*. This allows to emit an event when the value of the notify property changes.  
