
<div id="tab_container">
<meta name="columncount" content="3">
<meta name="a" content=".25">
<meta name="b" content=".7">
<meta name="c" content=".05">
<meta name="d" content="">

			<div id="left_pane" class="column">
			
			</div>
			<div id="center_pane" class="column">
				<?php
//open mysql connection
$connection = mysql_connect('localhost','root','');
mysql_select_db('dictionary');

$result = mysql_query("select * from language");
while ($row = mysql_fetch_assoc($result)) {
	$result2 = mysql_query("select * from $row[table_name] limit 100");
	while ($row2 = mysql_fetch_assoc($result2)) {
		$table_row = $row2;
		$table_row['language'] = $row['name'];
		$result3 = mysql_query("select abb from pos where pos.id='$table_row[pos]'");
		$pos_result = mysql_fetch_assoc($result3);
		$table_row['pos'] = $pos_result['abb'];
		mysql_free_result($result3);
		
		$result3 = mysql_query("select origin from origin where origin.id='$table_row[origin]'");
		$origin_result = mysql_fetch_assoc($result3);
		$table_row['origin'] = $origin_result['origin'];
		mysql_free_result($result3);
		
		$result3 = mysql_query("select relation.child, relationship.relationship from relation left join relationship on relation.relationship = relationship.id where parent=$row2[id]");
		while ($row3 = mysql_fetch_assoc($result3)) {
			$table_row["$row3[relationship]"] .= $row3['child'].";";
			//print_r ($row3);
		}
		mysql_free_result($result3);
		

		
		/*
		$i = 0;
		foreach ($relations as $relation) {
			$table_row[] = $relation;
		}
		*/
		$table[] = $table_row;
		unset($table_row);
	}
}
$array[] = 1;
$array[] = 2;
//echo '<pre>'; print_r($table); echo '</pre>';
print "<table border=1>".count($array);
print "<tr><td>".implode('</td><td>',array_keys($table[0]))."</td></tr>";
foreach ($table as $table_row) {
	print "<tr><td>".implode('</td><td>',$table_row)."</td></tr>";
}
print "</table>";
?>
			</div>
			<div id="right_pane" class="column">
			
			</div>
			</div>
