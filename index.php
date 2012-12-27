<?php
$load_page = $_GET['r'];
include('functions.inc');
include('pages.inc');


?>
<!DOCTYPE html PUBLIC "-//W3C//DTD XHTML 1.0 Transitional//EN" "http://www.w3.org/TR/xhtml1/DTD/xhtml1-transitional.dtd">
<html xmlns="http://www.w3.org/1999/xhtml">
<head>
	<title>VoiceBox: Keeping Language Alive</title>
	<meta http-equiv="Content-Type" content="text/html; charset=iso-8859-1" />
	<meta name="Robots" content="NOINDEX" />
	<meta http-equiv="PRAGMA" content="NO-CACHE" />
	<link rel="stylesheet" type="text/css" href="css/layout.css" />
	<link rel="stylesheet" type="text/css" href="css/custom-theme/jquery-ui-1.8.6.custom.css" />
	<script src="js/jquery-1.4.4.min.js" type="text/javascript"></script>
	<script src="js/jquery-ui-1.8.6.custom.min.js" type="text/javascript"></script>
	<script src="js/default.js" type="text/javascript"></script>
</head>
<body>
	<?php include('header.inc'); ?>
	<div id="nav" class="ui-widget-header">
		<span id="logo">VoiceBox: Keeping Language Alive</span>
		<div id="navtabs">
			<?php
				foreach ($pages as $page) {
					print "<a href=\"index.php?r=$page[2]\"><button>$page[0]</button></a>";
				}
			?>
		</div>
	</div>
			
	
<?php
// load the requested page
include($load_page);
include('footer.inc');

?>