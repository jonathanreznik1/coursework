<h1>Mountains</h1>

<div id="mountains"></div>
<h3>Table above/below</h3>

<script>
  const MOUNTAINS = [
    {name: "Kilimanjaro", height: 5895, place: "Tanzania"},
    {name: "Everest", height: 8848, place: "Nepal"},
    {name: "Mount Fuji", height: 3776, place: "Japan"},
    {name: "Vaalserberg", height: 323, place: "Netherlands"},
    {name: "Denali", height: 6168, place: "United States"},
    {name: "Popocatepetl", height: 5465, place: "Mexico"},
    {name: "Mont Blanc", height: 4808, place: "Italy/France"}
  ];

	//implement either a button or a function to start and execute
	
	//create and insert table element
	var table = document.createElement("table");	
	document.getElementById("mountains").appendChild(table);
			
	//create first row
  	table.appendChild(createElement("tr")).setAttribute("id","header");
	for(var i = 0; i<3; i++){
	  	
  }
  
</script>