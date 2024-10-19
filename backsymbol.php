


<a  href="index" id="backButton" class="w3-hide-small fixed-top link-offset-2 link-underline link-underline-opacity-0" style="width: 40px;float:left;margin-left: 10px;margin-top:10px;color:red;"> &larr;Back </a>


<script src="https://code.jquery.com/jquery-3.6.0.min.js"></script>


<script>
  document.addEventListener("DOMContentLoaded", function() {
 //  Find the back link element
  var backButton = document.getElementById("backButton");
  
  // Add a click event listener to the back link
  backButton.addEventListener("click", function(event) {
    // Prevent the default behavior of the link
  event.preventDefault();
    
    // Navigate to the previous page
   history.back();
  });
});

</script>









 
