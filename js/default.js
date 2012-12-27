$(function () {
	setColumns(3,.3,.5,.2,5,1,0,5);
	$(window).resize(function () {
		setColumns(3,.3,.5,.2,5,1,0,5);
	});
	$("body").addClass("ui-widget");
	$(".column")
		.addClass("ui-corner-all")
		.find("updown, close")
		.addClass("ui-state-default ui-corner-all");
	
	$("#navtabs button")
		.addClass("ui-widget-clear")
		.addClass("ui-widget-header ui-corner-top")
		.click(function(){
			var linkCommand = $(this).attr("title");
			masterNav(linkCommand);
		});
	setStyle();
});
function masterNav (page) {
	switch (page)
	{
	case "index":
		$("#left_pane").slideUp().load('home_l.html').slideDown();
		$("#center_pane").slideUp().load("home_c.html").slideDown();
		$("#right_pane").slideUp().load("home_r.html").slideDown();
		break;
	default:
		alert(page);
	}
	setStyle();
}
function setStyle () {
	$(".widgetbox").addClass("ui-widget-content ui-corner-all");
	$(".widgetbox div.title").addClass("ui-widget-header");
	$(".updown span").addClass("ui-icon ui-icon-circle-triangle-s");
	$(".close span").addClass("ui-icon ui-icon-circle-close");
	$(".widgetbox .updown").click(function(){
		if ($(this).parents(".widgetbox").find(".contents").is(":hidden")) {
			$(this).parents(".widgetbox").find(".contents").slideDown("medium");
			//$(this).removeClass("ui-icon-circle-triangle-e").addClass("ui-icon-circle-triangle-s");
		} else {
			$(this).parents(".widgetbox").find(".contents").slideUp("medium");
		}
		$(this).find("span").toggleClass("ui-icon-circle-triangle-w").toggleClass("ui-icon-circle-triangle-s");
	});
	$(".widgetbox .close").click(function(){
		$(this).closest(".widgetbox").slideUp();
	});
	alert("ran");
}
function home () {
	alert("home");
}

function setColumns (columnCount,a,b,c,spacingWidth,borderWidth,marginWidth,paddingWidth) {
	var browserWidth = $(window).width();
	var browserHeight = $(window).height();
	var bufferWidth = ( borderWidth + marginWidth + paddingWidth ) * 2;
	var left_paneWidth = browserWidth * a - bufferWidth - spacingWidth * 2;
	var center_paneWidth = browserWidth * b - bufferWidth;
	var right_paneWidth = browserWidth * c - bufferWidth - spacingWidth * 2;
	
	var tab_containerHeight = browserHeight - 95;
	$("#tab_container").css("width",browserWidth).css("height",tab_containerHeight);

	var paneHeight = browserHeight - $("#header").outerHeight() - $("#nav").outerHeight() - $("#footer").outerHeight() - bufferWidth - spacingWidth * 2;

	$("#left_pane").css("width",left_paneWidth).css("left",spacingWidth);
	$("#center_pane").css("width",center_paneWidth);
	$("#right_pane").css("width",right_paneWidth).css("right",spacingWidth);
	$("#left_pane, #center_pane, #right_pane").css("height",paneHeight).css("top",spacingWidth);
	
	var center_panePosition = $("#left_pane").outerWidth() + spacingWidth * 2;
	$("#center_pane").css("left",center_panePosition);
}
function set_span_margins() {
	
}