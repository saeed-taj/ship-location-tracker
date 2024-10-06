This project features a C++ class called ship that keeps track of a ship's number and its geographical location using latitude and longitude represented by angle objects. Each ship object is automatically assigned a unique serial number upon creation. This implementation highlights the use of object-oriented programming principles and encapsulation.

Features
Unique Ship Numbers: Each ship is assigned a unique serial number, reflecting its creation order.
Latitude and Longitude Representation: The ship's position is stored using angle objects that represent geographical coordinates.
User Interaction: The program allows users to input the position of each ship and displays the serial number along with the corresponding position.


Example
When three ships are created and their positions inputted, the output will display their respective numbers and positions:

Ship 1: Serial Number 1, Position: 17°31.5’ S, 149°34.8’ W
Ship 2: Serial Number 2, Position: 18°00.0’ S, 150°00.0’ W
Ship 3: Serial Number 3, Position: 19°15.2’ S, 151°45.1’ W

Code Explanation
The ship class utilizes a static member variable to maintain a count of all ship objects created.
Each ship object contains two angle objects for latitude and longitude.
Member functions allow for the input and display of the ship's position and serial number.
