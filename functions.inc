<?php

function printWidget ($title, $content) {
print "<div class=\"widgetbox\">
	<div class=\"title\">$title
		<span class=\"close\">
			<span></span>
		</span>
		<span class=\"updown\">
			<span></span>
		</span>
	</div>
	<div class=\"contents\">
		$content
	</div>
</div>";		
}
function printWidget2 ($file) {
print "<div class=\"widgetbox\">
	<div class=\"title\">TITLE
		<span class=\"close\">
			<span></span>
		</span>
		<span class=\"updown\">
			<span></span>
		</span>
	</div>
	<div class=\"contents\">";
include($file);
print "</div>
</div>";		
}

?>