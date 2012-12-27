
<div id="tab_container">
<meta name="columncount" content="3">
<meta name="a" content=".3">
<meta name="b" content=".5">
<meta name="c" content=".2">
<meta name="d" content="">
			<div id="left_pane" class="column">
				<?php
				$a = "Random Word";
				$b = "<dl>
							<dt>mbaal</dt>
							<ol>
								<li>Sheep</li>
								<li>Ram</li>
							</ol>
							<dt>o kiin</dt>
							<ol>
								<li>Person</li>
							</ol>
						</dl>";
				printWidget($a, $b);
				$a = "Basic Search";
				$b = "<form>
							<input type=\"text\"><button>Search</button>
						</form>";
				printWidget($a, $b);
				$a = "Language Options";
				$b = "<form>
							<input type=\"checkbox\"><label>English<br></label>
							<input type=\"checkbox\"><label>Sereer</label><br>
							<input type=\"checkbox\"><label>Pulaar</label><br>
							<input type=\"checkbox\"><label>Wolof</label><br>
							<input type=\"checkbox\"><label>Mandinka</label><br></form>";
				printWidget($a, $b);
				$a = "Language Specific Options";
				$b = "";
				printWidget($a, $b);
				printWidget2('../dic/form_test.php');
				?>
			</div>
			<div id="center_pane" class="column">
			
			
				<?php
				$a = "Welcome!";
				$b = "<p>Welcome to the brand new Lingua-Links online language tool. Here you will find language tools and resources to fuel your project, whatever that may be. Lingua-Link is a project of Peace Corps Senegal, but designed to be a tool for curious parties the world over. Whatever you field, whatever your interests, you're bound to find something here.</p>";
				printWidget($a, $b);
				$a = "Get Involved";
				$b = "<p>If you'd like to get involved with the project, contact Jack for more info.</p>";
				printWidget($a, $b);
				?>
			</div>
			<div id="right_pane" class="column">
				<?php
				$a = "News";
				$b = "<p>News item 1</p><p>News item 2</p>";
				printWidget($a, $b);
				?>
			</div>
			</div>
