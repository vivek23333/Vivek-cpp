
function startAnimation(){

    document.getElementById("box").style.display="none";

    document.getElementById("emojis").style.display="block";

    setTimeout(function(){

        document.getElementById("emojis").style.display="none";

        document.getElementById("final").style.display="block";

    },2700);

}

