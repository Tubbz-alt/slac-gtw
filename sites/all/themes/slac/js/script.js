/**
 * @file
 * A JavaScript file for the theme.
 *
 * In order for this JavaScript to be loaded on pages, see the instructions in
 * the README.txt next to this file.
 */

// JavaScript should be made compatible with libraries other than jQuery by
// wrapping it with an "anonymous closure". See:
// - http://drupal.org/node/1446420
// - http://www.adequatelygood.com/2010/3/JavaScript-Module-Pattern-In-Depth
(function ($, Drupal, window, document, undefined) {

  Drupal.behaviors.mobileHeader = {
    attach: function (context, settings) {
      if( $('body').width() < 601 ){
        // width < 600px

        var $menu = $('.region-header #block-system-main-menu .menu:first'),
      	    $searchbox = $('.region-header #block-boxes-web-search');      
      	
      	$('<ul class="mobile-menu">'+ $menu.html() +'</ul>').insertBefore('#main');
      	$('<div class="mobile-search">'+ $searchbox.find('form').parent().html() +'</div>').insertBefore('#main');
      	$('.mobile-search form').append('<input id="search-people" type="radio" name="same" checked="true"/><label for="search-people">People</label><input id="search-slac" type="radio" name="same" /><label for="search-slac">SLAC</label>');
        
        var $menuMobile = $('.mobile-menu'),
            $searchMobile = $('.mobile-search');

        $menu.parent().toggle(function(){
        	$menuMobile.slideDown('slow');
        },function(){
        	$menuMobile.slideUp('slow');
        });
        
        $searchbox.toggle(function(){
        	$searchMobile.slideDown('slow');
        },function(){
        	$searchMobile.slideUp('slow');
        });
      }
    }
  }
  
  // combo searchbox
  Drupal.behaviors.search = {
     attach: function (context, settings) {
       $('#searchForm').submit(function(e) {
          e.preventDefault();
         var search_type = $('#searchForm input[name="searchType"]:checked').val();
         var keyword = $('#searchForm #keyword').val();
         // people search
         if (search_type == 'people') {
           var url = "http://www-public.slac.stanford.edu/phonebook/dirsearch.aspx?lf=1&url=&gone=active&NAME=" + keyword;
         } else {
           var url = "http://www-psearch.slac.stanford.edu/SLACSearch/app/slac/index?style=mainSite&qt=" + keyword;
         }
         document.location = url;
       })
     }
   }

	Drupal.behaviors.researchLists = {
	  attach: function (context, settings) {

    	$('.section-research-resources .view-content .view-grouping-content').append('<span class="collapse">Collapse<img src="/sites/all/themes/slac/images/collapse.png" alt="" /></span>');	
			$(window).resize(function() {
				if (Modernizr.mq('(max-width: 600px)')) {		
		    	$('.section-research-resources .view-content .view-grouping-header').click(function(){
					  var $this = $(this);
		        if (!$this.index() && !$this.hasClass('processed')) {
		          $this.addClass('processed').toggleClass('expanded').siblings('.view-grouping-content').toggle(1, function() {
		            $this.removeClass('processed');
		          });
		          $this.parent().siblings('.view-grouping').find('.view-grouping-content').hide()
		          	   .stop().siblings().removeClass('expanded');
		        }
					});
		    	$('.section-research-resources .view-content .collapse').click(function(){
		    	$(this).closest('.view-grouping-content').hide().siblings().removeClass('expanded');
		    	});
	 			}


			});
	  }
	}

	Drupal.behaviors.listOddClass = {
	  attach: function (context, settings) {
		$('.brown-bodered-white .menu li').filter(function(index) {return index % 2 == 0}).addClass('odd');
	  }
	}

	Drupal.behaviors.backOnTop = {
	  attach: function (context, settings) {
	  	$('<a href="#" class="back-on-top"><span>Go to top</span></a>').insertBefore('.footer-wrapper')	
	  }
	}

})(jQuery, Drupal, this, this.document);
