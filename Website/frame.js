/*Name this external file gallery.js*/

function upDate(previewPic){
    var a= previewPic.src;
    var x=document.getElementById("image")
    .style.backgroundImage = "url('" + a +"')"
     var y=document.getElementById("image")
    .innerHTML = previewPic.alt;
    }
  
      function unDo(){
     var x=document.getElementById("image")
    .style.backgroundImage = "url('')" ;
     var y=document.getElementById("image")
    .innerHTML= "Hover over an image below to display here.";
       
      }